//Dado um array int numeros[5] = {2, 4, 6, 8, 10};, use um ponteiro para imprimir todos os seus elementos.
#include <stdio.h>
int main(){
  int arr[5]={2, 4, 6, 8, 10};
  int *ptr = arr;
  int c=0;
  
  int ss = sizeof(arr) / sizeof(int);
   printf("quantidade de elementos no array: %d \n", ss);
  
  while(c<5){
    printf("elemento: %d.\n", *ptr++);
    c+=1;
  }
}
