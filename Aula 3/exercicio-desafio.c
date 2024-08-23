//Faça um programa que mostre o apenas o n-ésimo termo da série de Fibonacci. Esse programa deve 
//receber como entrada um número inteiro n maior que 2 (considere que 0 e 1 são conhecidos, sendo
//eles os 2 primeiros números da série).
#include<stdio.h>

int main() {
    
    int num=0, newfibonacci=0, fibonacci=1, nextfibonacci=0;

    printf("Digite um numero inteiro maior que 0: ");
    scanf("%d", &num);
    
    for(int cont = 0; cont < num; ){
    
    if (cont == 1)
    fibonacci = 1;
    
    nextfibonacci=fibonacci+newfibonacci;
    
    fibonacci=newfibonacci;
    newfibonacci=nextfibonacci;
    cont++;
}
    printf("Resultado = %d", nextfibonacci);
    return 0;
}
