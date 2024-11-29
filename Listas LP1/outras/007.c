// Escreva uma função void reverte(int *arr, int tamanho) que inverte um array. 
// Use-a em int valores[] = {1, 2, 3, 4, 5}; e imprima o array invertido.
#include<stdio.h>
void reverte(int *arr, int tamanho){
    for (int i=0; i< tamanho/2; i++){
        int temp = *(arr+i);
        *(arr + i) = *(arr +tamanho - 1 -i); //primeiros indices recebem os ultimos valores
        *(arr + tamanho - 1 - i) = temp; //coloca o primeiro valor nas ultimas posicoes
    }
}

int main() {
    int valores[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(valores) / sizeof(valores[0]);
    
    printf("Array original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");
    
    reverte(valores, tamanho); // Inverte o array
    
    printf("Array invertido: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");
    
    return 0;
}