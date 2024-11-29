// Escreva uma função que tem um parâmetro inteiro com nome x de entrada. Aloque um vetor de inteiros com 5 vezes o tamanho. Inicialize o vetor com um valor diferente de zero.

// #include <cstdlib>
#include <stdlib.h>
#include<stdio.h>

int * func (int x){
    int n=x*5;
    int * ptr = (int *) malloc(n*sizeof(int));
    for(int i; i<n; ++i)
      ptr[i]=1;

    return ptr;
}
int main(){
  int * v = func(5);
}
