//Escreva uma função void somaElementos(int *arr, int tamanho) que calcula e imprime a soma dos elementos de um array de inteiros.
//No main, declare um array int numeros[] = {1, 2, 3, 4, 5, 6, 7};. Chame a função somaElementos passando o sub-array a partir do terceiro elemento
//(ou seja, &numeros[2]) e o tamanho adequado, para calcular a soma dos elementos a partir do terceiro elemento do array original.
#include<stdio.h>
int somaElementos(int *arr, int tamanho){
    int soma =0;
    for(int i=0; i<tamanho; i++){
        soma+= arr[i];
    }
    printf("Soma = %d", soma);
    
}

int main(){
  int numeros[] = {1, 2, 3, 4, 5, 6, 7};
  int tam=sizeof(numeros)/sizeof(int);
  int subTam = tam-2;
  somaElementos(&numeros[2], subTam);
  return 0;
  
}
