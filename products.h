struct produto{
    int codigo;
    char descricao[61];
    char fornecedor[61];
    int quantidadeEstoque;
    double preco;
};

typedef struct produto Produto;


void inicializar(Produto *p[], int tamanho);
void cadastrar(Produto *p[], int posicao);
void listar(Produto *p[], int tamanho);
void encontrar(Produto *p[], int tamanho, int codigo);
void comprar(Produto *p[], int tamanho, int codigo, int quantidade);
void vender(Produto *p[], int tamanho, int codigo, int quantidade);
void mostrarProduto(Produto *p);



