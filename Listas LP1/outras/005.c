// Escreva uma funçao que receba um array de inteiros V e os enderecos de duas variaveis
// inteiras, min e max, e armazene nessas variaveis o valor mınimo e maximo do array.
// Escreva tambem uma funçao main que use essa funçao.

#include<stdio.h>

void mm(int arr[], int tamanho, int *minimo, int *maximo){
    for(int i=0; i<tamanho; i++){
        *maximo = arr[0];
        *minimo = arr[0];
        while(tamanho>0){
            if(*arr < *minimo){
                *minimo = *arr;
            }
            else if(*arr > *maximo){
                *maximo = *arr;
            }
            arr++;
            tamanho--;
        }
    }
}

int main(){
    int v[5]={1,2,3,4,5};
    int min=0, max=0;
    int tam = sizeof(v) / sizeof(v[0]);

    mm(v, tam, &min, &max);
    printf("%d, %d", min, max);
    
}