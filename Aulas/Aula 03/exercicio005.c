//Crie um algoritmo em C que leia um número inteiro positivo e calcule o fatorial desse número.

#include<stdio.h>
int main() {
	int num,fatorial=1;

	printf("Digite um numero: ");
	scanf("%d", &num);

	for (int i = 1; i <= num;) {
	    fatorial=fatorial*i;
	    i++;
		} 
	printf("%d é o fatorial. ", fatorial);
}
