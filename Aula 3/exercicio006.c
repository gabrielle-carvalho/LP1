//Escreva um programa em C que leia dois números inteiros e exiba o maior deles.
//Caso sejam iguais, exiba uma mensagem informando que os números são iguais.
#include<stdio.h>
int main() {
	int num,num2;

	printf("Digite um numero: ");
	scanf("%d", &num);
	
	printf("Digite um numero: ");
	scanf("%d", &num2);
	
	if (num2==num){
	    printf("os números são iguais.");
	} else	if(num>num2){
	    printf("%d é o maior", num);
	} else{
	    printf("%d é o maior", num2);
	}
	
}
