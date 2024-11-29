//Faça um programa que mostre o apenas o n-ésimo termo da série de Fibonacci. Esse programa deve 
//receber como entrada um número inteiro n maior que 2 (considere que 0 e 1 são conhecidos, sendo
//eles os 2 primeiros números da série).
#include<stdio.h>

int main() {
    
    int num=0, newfibonacci=0, fibonacci=1, nextfibonacci=0;

    printf("Digite um numero inteiro maior que 2: ");
    scanf("%d", &num);
    
    if(num <= 2) {
    printf("O número deve ser maior que 2.\n");
    return 1;
    }
    
    for(int cont = 0; cont < num; ){

    nextfibonacci=fibonacci+newfibonacci;
    fibonacci=newfibonacci;
    newfibonacci=nextfibonacci;
    
    cont++;
}
    printf("O %d° termo da sequência de fibonacci é: %d", num, nextfibonacci);
    return 0;
}
