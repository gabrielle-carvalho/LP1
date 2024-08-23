//Faça um programa em C que leia uma sequência de números inteiros (a sequência termina 
//quando o usuário digitar um número negativo) e exiba o maior número digitado.
#include<stdio.h>

int main()
{
    int num, newnum=0;
    while(num>=0){
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num>0){
      newnum=newnum+num;
    }
    

    }
    printf("Resultado = %d", newnum);
    return 0;
}
