
// Recebe 3 parâmetros: um vetor de inteiros, um número inteiro n
// passado por valor e outro número x passado como ponteiro.
// Retorna um número inteiro.
// Decompõe o número n em fatores primos e armazena-os nas
// posições do vetor. O conteúdo de x deve receber o número de
// fatores primos encontrados. Caso o número de fatores encontrados
// seja maior que 10, a função deve retornar 1, do contrário deve
// retornar 0.
// Dica: Para decompor um número em números primos, deve-se
// dividi-lo pelo menor primo possível (restando zero), sucessivamente
// até que o quociente seja 1. Ex:
// Assim, a fatoração de 220 é: 2 x 2 x 5 x 11. Logo, o número de
// fatores primos encontrados nesse exemplo é 4.

#include<stdio.h>

int fatorando_primos(int *vector, int n, int *x){
    int count =0, fator=2;
    while(n>1){ 
        while (n%fator == 0) { // se o numero for divisel
            if(count<10){ // se houver menos de 10 ftores
                vector[count] = fator; //guarda o fato no vetor
            }
            n/=fator; //faz a divisao de n pelo fator
            count++; // numero de fatores encontrado++
        }
        fator++; // Passa para o próximo número (tentando os próximos primos)
    }
    *x = count;
    if(count>10){ 
        return 1;
    }
    return 0;
}
int main() {
    int n, x;
    int vetor[10];  // Vetor para armazenar até 10 fatores primos
    
    printf("Digite o número a ser decomposto: ");
    scanf("%d", &n);

    int resultado = fatorando_primos(vetor, n, &x);

    printf("Número de fatores primos: %d\n", x);

    if (x > 0) {
        printf("Fatores primos: ");
        for (int i = 0; i < x; i++) {  
            printf("%d ", vetor[i]);
        }
        printf("\n");
    }

    if (resultado == 1) {
        printf("Mais de 10 fatores primos encontrados.\n");
    } else {
        printf("Menos de 11 fatores primos encontrados.\n");
    }

    return 0;
}