//3. Escreva um programa em C que leia um número inteiro e exiba todos os números 
//ímpares de 1 até esse número.
#include<stdio.h>
int main(){
    int num;

  printf("Digite um numero: ");
  scanf("%d", &num);

for (int i = 1; i <= num; i++) {
        if (num % i != 0) {
            printf("%d ", i);
        }
}
    
}
