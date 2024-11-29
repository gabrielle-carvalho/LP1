// Questão 2) Faça um programa em C que receba do usuário a 
//quantidade N de números a ser digitada. Em seguida, o programa 
//deve alocar dinamicamente um vetor de N inteiros, receber N 
//números do usuário e armazenar no vetor, e mostrar o maior valor
// do vetor, o menor valor do vetor e a média dos valores.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int tam=0;
    int maior, menor, soma = 0;
    float media;

    printf("Digite a quantidade de numeros a ser digitada:\n");
    scanf("%d", &tam);  

    int *value = malloc(tam * sizeof(int));
    if (value == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < tam; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &value[i]);  
        soma += value[i];
    }

    maior = menor = value[0];

    for (int j = 0; j < tam; j++) {
        if (value[j] > maior) {
            maior = value[j];
        }
        if (value[j] < menor) {
            menor = value[j];
        }
    }

    media = (float)soma / tam;

    printf("MAIOR = %d, MENOR = %d, MEDIA DOS VALORES = %.2f\n", maior, menor, media);

    free(value);

    return 0;
}
