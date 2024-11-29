//Escreva um algoritmo em C que leia uma série de números inteiros
//(a entrada termina quando o número 0 é digitado) e exiba a soma desses números..
#include <stdio.h>

int main()
{
    int newnum, num;
    
    printf("Insira um numero: ");
    scanf("%d", &num);
    
    while(num!=0){
        newnum=num+newnum;
        printf("Insira um numero: ");
        scanf("%d", &num);
    }   printf("%d", newnum);
    return 0;
}
