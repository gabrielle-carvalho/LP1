//Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em decímetros,
//centímetros e milímetros.
#include<stdio.h>
    int main(){
        float tamanho, decimetros=0, centimetros=0, milimetros=0;
        printf("Digite o valor em metros: ");
        scanf("%f", &tamanho);
        
        decimetros=tamanho*10;
        centimetros=tamanho*100;
        milimetros=tamanho*1000;
        
        printf("decimetros = %.2f, centimetros = %.2f, milimetros = %.2f.", decimetros, centimetros, milimetros);
    }
