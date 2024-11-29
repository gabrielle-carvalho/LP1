//Faça um algoritmo em C que leia um número inteiro e determine se ele é par ou ímpar.

#include<stdio.h>
int main() {
	int num;

	printf("Digite um numero: ");
	scanf("%d", &num);

		if (num % 2 != 0) {
			printf("%d é impar. ", num);
		} else{
		    printf("%d é par. ", num);
		}
	}
