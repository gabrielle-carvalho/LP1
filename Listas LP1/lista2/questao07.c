// Questão 7) Crie um programa em C que faça o cadastro de produtos de um estoque,
// com as seguintes informações para cada produto:
// Código de identificação do produto: representado por um valor inteiro;
// Nome do produto: com até 50 caracteres;
// Quantidade disponível no estoque: representado por um número inteiro;
// Preço de venda: representado por um valor real;

// a) Defina uma estrutura, denominada produto, que tenha os campos apropriados
// para guardar as informações do produto.

// b) Crie um conjunto de N produtos (com N sendo fornecido pelo usuário) e peça ao
// usuário para entrar com as informações de cada produto.

// c) Encontre o produto com maior preço de venda.

// d) Encontre o produto com a maior quantidade disponível no estoque.
#include<stdio.h>
#include<stdlib.h>

struct Produto{
    int id_produto;
    char nome_produto[50];
    int qtd_disponivel;
    float preco;
}; 

void cadastro_prod(struct Produto *n_produto){
    printf("Insira id do produto: ");
    scanf("%d", &n_produto ->id_produto); 

    printf("Insira nome do produto: ");
    scanf("%s", n_produto ->nome_produto); 

    printf("Insira quantidade disponivel do produto: ");
    scanf("%d", &n_produto ->qtd_disponivel);   

    printf("Insira preco do produto: ");
    scanf("%f", &n_produto ->preco); 
    
}

int main(){
    int n=0;

    printf("digite a quandidade de produtos a ser cadastrado %d", n);
    scanf("%d", n);

    struct Produto * n_produto =(struct Produto *) (malloc(sizeof(struct Produto)*n));

    if(n_produto == NULL){
        printf("Erro na alocacao");
        return 1;
    }

    for(int i=0; i<n;i++){
        printf("Cadastro do produto %d:\n", i + 1);
        cadastro_prod(&n_produto[i]);
    }

    struct Produto * mais_caro = &n_produto[0];
    struct Produto * maior_quantidade = &n_produto[0];

    for(int i=0; i<n;i++){
        if (n_produto[i].preco > mais_caro->preco) {
            mais_caro = &n_produto[i];
        }
        if (n_produto[i].qtd_disponivel > maior_quantidade->qtd_disponivel) {
            maior_quantidade = &n_produto[i];
        }
    }

    printf("\nProduto com maior preço de venda:\n");
    printf("ID: %d\n", mais_caro->id_produto);
    printf("Nome: %s\n", mais_caro->nome_produto);
    printf("Preço: %.2f\n", mais_caro->preco);

    printf("\nProduto com maior quantidade disponível:\n");
    printf("ID: %d\n", maior_quantidade->id_produto);
    printf("Nome: %s\n", maior_quantidade->nome_produto);
    printf("Quantidade: %d\n", maior_quantidade->qtd_disponivel);


    free(n_produto);
    return 0;
  
}

