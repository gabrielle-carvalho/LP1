//Faça um programa em C que leia um número inteiro e exiba a tabuada desse número de 1 a 10.
#include<stdio.h>
int main(){
    int newnum, num;

  printf("Digite um numero: ");
  scanf("%d", &num);

for (int i = 1; i <= 10; i++) {
            newnum=num*i;
            printf("%d ", newnum);
        }
}
    
