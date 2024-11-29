//Dado um array int numeros[5] = {2, 4, 6, 8, 10};, use um ponteiro para imprimir todos os seus elementos.
#include <stdio.h>
int main(){
  int arr[5]={2, 4, 6, 8, 10};
  int *ptr = &arr[0];
  for(i=0; i<5; i++){
    printf("elemento %d: %d.", i, *(ptr+i));
  }
}
//erro que cometi antes de consertar o código e porque ele está errado:
//printf("elemento %d: %d.\n", i, *ptr+i);
//ao tirar o () de *ptr+1, ele estava incrementando o valor de i ao valor primeira posição
//colocando (), ao incrementar i ao ponteiro, é possível percorrer o array
//porque ao somar um valor do mesmo tipo ele vai para a proxima posicao
