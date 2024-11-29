//As maçãs custam R$ 0,30 cada se forem compradas menos do que uma dúzia, 
//e R$ 0,25 se forem compradas pelo menos doze. Escreva um programa que 
//leia o número de maçãs compradas, calcule e escreva o valor total da compra. 

#include<stdio.h>
int main(){
    int macas;
  float total;

  printf("Digite a quantidade de macas compradas: ");
  scanf("%d", &macas);

  if(macas<12){
    total=macas*0.30;
    printf("total = %.2f ", total);
  }
  else if (macas>=12){
    total=macas*0.25;
    printf("total = %.2f ", total);
  }
    
}
