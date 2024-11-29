//Exercício 0: escreva uma função que recebe um ponteiro para um inteiro e dobra seu valor
#include<stdio.h>
int main(void){
  int num =8;
  f(&num);
  printf("%d", num);
  return 0;
}

void f(int *n){
  *n = 2* *n;
}
