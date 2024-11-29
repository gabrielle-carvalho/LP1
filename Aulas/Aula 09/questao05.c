//Escreva uma função void multiplicaPorDois(int *arr, int tamanho) que multiplica cada elemento de um array por 2.
//No main, declare um array int dados[] = {1, 3, 5, 7, 9};, chame a função e imprima o array modificado.
#include<stdio.h>

void multiplicaPorDois(int *arr, int tamanho){
  for(int i=0; i<tamanho; i++){
    *arr = 2* *arr;
    arr++;
  }
}

int main(){
  int dados[] = {1, 3, 5, 7, 9};
  int tam = sizeof(dados)/sizeof(int);
  
    for(int i=0; i<tam; i++){
      printf("posicao %d: valor anterior: %d\n", i, dados[i]);
}

  multiplicaPorDois(dados, tam);
  for(int i=0; i<tam; i++){
      printf("posicao %d: novo valor: %d\n", i, dados[i]);
}
    return 0;
}
