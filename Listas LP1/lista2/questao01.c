// Questão 1) Faça um programa em C que:
// •Aloque dinamicamente um array de 5 números inteiros;
// •Peça para o usuário digitar os 5 números no espaço alocado;
// Mostre os 5 números alocados na tela;
// Libere a memória alocada.

#include<stdio.h>
#include<stdlib.h>
int main(){
    int tamanho = 5;
    int *x = malloc(tamanho*sizeof(int));
    if(x == NULL){
        printf("Erro alocando\n");
        return 1;
    }
    for (int i=0; i<tamanho; i++){
        printf("Digite o número: %d", i+1);
        scanf("%d", &x[i]);
    }
    printf("Números digitados:\n");
    for (int i=0; i<tamanho; i++){
        printf("x[%d]: %d\n", i, x[i]);
    }
    free(x);
    return 0;
}