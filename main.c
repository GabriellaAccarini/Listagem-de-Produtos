#include <stdio.h>
#include <stdlib.h>
#include "products.h"
#define T 5

int main()
{
    Produto * products[T];
    inicializar(products, T);
    int opcao;
    int posicao = 0;
    int codigo =0;
    int quantidade=0;

    do{
        printf("1. Cadastrar \n");
        printf("2. Listar \n");
        printf("3. Encontrar \n");
        printf("4. Comprar \n");
        printf("5. Vender \n");
        printf("6. Sair \n");
        printf("Digite o que deseja: ");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            cadastrar(products, posicao);
            posicao ++;
            break;
        case 2:
            listar(products, posicao);
            break;
        case 3:
            fflush(stdin);
            printf("Digite o codigo do produto que deseja encontrar: ");
            scanf("%d", &codigo);

            encontrar(products, posicao, codigo);
            break;
        case 4:
            fflush(stdin);
            printf("Digite o codigo do produto comprado: ");
            scanf("%d", &codigo);

            printf("Digite a quantidade comprada: ");
            scanf("%d",&quantidade);

            comprar(products, posicao, codigo, quantidade);
            break;
        case 5:
            fflush(stdin);
            printf("Digite o codigo do produto vendido: ");
            scanf("%d", &codigo);

            printf("Digite a quantidade vendida: ");
            scanf("%d",&quantidade);

            vender(products, posicao, codigo, quantidade);
            break;
        case 6:
            printf("\n");
            break;
        default:
            printf("Essa opcao nao existe");
        }
    }while(opcao != 6);
    printf("Obrigada!!");
    return 0;
    }
