#include <stdio.h>
#include <stdlib.h>
#include "products.h"

void mostrarProduto(Produto *p){
    printf("Codigo: %d \n", p->codigo);
    printf("Descricao: %s \n", p->descricao);
    printf("Fornecedor: %s \n", p->fornecedor);
    printf("Quantidade: %d \n", p->quantidadeEstoque);
    printf("Preco: %lf \n", p->preco);
}

void inicializar(Produto *p[], int tamanho){
    for(int i=0; i<tamanho; i++){
        p[i]=NULL;
    }
};
void cadastrar(Produto *p[], int posicao){
    p[posicao] = (Produto*)malloc(sizeof(Produto));

    fflush(stdin);
    printf("Digite o codigo do produto:\n");
    scanf("%d", &p[posicao]->codigo);

    fflush(stdin);
    printf("Digite a descricao do produto:\n");
    scanf("%[^\n]", p[posicao]->descricao);

    fflush(stdin);
    printf("Digite o fornecedor do produto:\n");
    scanf("%[^\n]", p[posicao]->fornecedor);

    fflush(stdin);
    printf("Digite o quantidade do produto:\n");
    scanf("%d", &p[posicao]->quantidadeEstoque);

    fflush(stdin);
    printf("Digite o preco do produto:\n");
    scanf("%lf", &p[posicao]->preco);

    printf("Produto cadastrado!\n");
};
void listar(Produto *p[], int tamanho){
    for(int i=0; i<tamanho; i++){
        mostrarProduto(p[i]);
    }
};
void encontrar(Produto *p[], int tamanho, int codigo){
    for(int i=0; i<tamanho; i++){
        if(p[i]->codigo == codigo){
            mostrarProduto(p[i]);
        }
    }

};
void comprar(Produto *p[], int tamanho, int codigo, int quantidade){
    for(int i=0; i<tamanho; i++){
        if(p[i]->codigo == codigo){
            p[i]->quantidadeEstoque += quantidade;
            printf("Entrada de produto no estoque\n");
            return;
        }
    }
    printf("Codigo não encontrado\n");
};
void vender(Produto *p[], int tamanho, int codigo, int quantidade){
    for(int i=0; i<tamanho; i++){
        if(p[i]->codigo == codigo){
                if(p[i]->quantidadeEstoque >= quantidade){
                   p[i]->quantidadeEstoque -= quantidade;
                   printf("Saida de produto do estoque\n");
                   return;
                }else{
                    printf("Quantidade em estoque insuficiente\n");
                    return;
                }
        }
    }
    printf("Codigo não encontrado\n");
};
