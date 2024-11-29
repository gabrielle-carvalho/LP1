// Questão 5) Faça um programa em C que aloque dinamicamente uma matriz de inteiros
// de dimensões definidas pelo usuário e a leia. Em seguida, implemente uma função que
// receba um valor, retorne 1 caso o valor esteja na matriz ou retorne 0 caso o valor não
// esteja na matriz.

#include<stdio.h>
#include<stdlib.h>

int procurando(int *val, int linha, int coluna, int valor){
    for(int i=0; i<linha; i++){
        for(int j = 0; j<coluna; j++){
            if(val[i * coluna + j] == valor){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int x, y, value;
    printf("Digite a quantidade de linhas desejada: ");
    scanf("%d", &x);
    printf("Digite a quantidade de colunas desejada: ");
    scanf("%d", &y);

    int *matriz = malloc( x*y*sizeof(int));
    if (matriz == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for(int i=0; i<x; i++){
        for(int j = 0; j<y; j++){
            printf("Digite o valor da linha: %d e coluna %d", i, j);
            scanf("%d", &matriz[i * y + j]);
        }
    }

    printf("Digite o valor a ser procurado: ");
    scanf("%d", &value);

    if(procurando(matriz, x, y, value)){
        printf("está na matriz");
    }
    else{
        printf("Não está contido na mztriz");
    }


    free(matriz);
    return 0;
}