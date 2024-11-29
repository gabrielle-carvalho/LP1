// Crie uma func¸ao para somar dois arrays. Esta funçao deve receber dois arrays e retornar
// a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja diferente
// entao a funçao retornar a ZERO (0). Caso a funçao seja concluıda com sucesso a mesma
// deve retornar o valor UM (1). Utilize aritmetica de ponteiros para manipulaçao do array.

#include <stdio.h>

// int soma(int arr1[], int arr2[]){
int soma(int *arr1, int *arr2, int *arr3, int tamanho1, int tamanho2) {
    if(tamanho1 != tamanho2){
        return 0;
    }
    for(int i=0; i<tamanho1; i++){
        *(arr3+i) = *(arr2+i) + *(arr1+i);
    }
    return 1;
}

int main(){    
    int array1[] = {1, 2, 3, 4};
    int array2[] = {5, 6, 7, 8};
    int tam1 = sizeof(array1) / sizeof(array1[0]);
    int tam2 = sizeof(array2) / sizeof(array2[0]);
    int array3[tam1];
    int resultado = soma(array1, array2, array3, tam1, tam2);
    if (resultado == 0) {
        printf("Os tamanhos dos arrays são diferentes. Operação falhou.\n");
    } else {
        printf("A soma dos arrays é: ");
        for (int i = 0; i < tam1; i++) {
            printf("%d ", array3[i]);
        }
        printf("\n");
    }
    
    return 0;
}