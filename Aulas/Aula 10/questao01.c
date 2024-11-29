// Escreva uma função recursiva em C chamada somaDigitos que receba um número inteiro positivo n e retorne a soma de seus dígitos. Observe o exemplo

// Entrada: 1234
// Saída: 10
// (Explicação:  1+2+3+4=10 )
#include <stdio.h>

int somaDigitos(int n) {
    if (n==0) {
        return 0;
    } else {
        // soma=n%10 + valor;
        // n=n/10;
        return n%10 + somaDigitos(n/10);
    }
}

int main() {
    int number = 1234;
    printf("%d -> %d\n", number, somaDigitos(number));
    return 0;
}
