//Dado dois vetores de inteiros e seus respectivos tamanhos, retorne quantos elementos aparecem em ambos os vetores

#include<stdio.h>

int repeticoes(int *ptr1, int tam1, int *ptr2, int tam2){
    int k=0;
    for(int i=0; i<tam1; i++){
        for(int j=0; j<tam2; j++){
            if (ptr1[i] == ptr2[j]){
                k++;
                break;
            }
        }
    }
    return k;
}
