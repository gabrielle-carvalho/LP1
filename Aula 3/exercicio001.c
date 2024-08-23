//Faça um programa que implemente um menu onde o usurário deverá selecionar 1 ou 0. Caso seja entrado um número diferente,
//o programa deverá solicitar uma nova opção. [Marcelo Cendron, IFC]
#include<stdio.h>
int main(){
  int caso;

  printf("Digite 0 ou 1: ");
  scanf("%d", &caso);
    while(caso!=0 && caso!=1){
    printf("Digite uma nova opção: ");
    scanf("%d", &caso);  
}
 
}
