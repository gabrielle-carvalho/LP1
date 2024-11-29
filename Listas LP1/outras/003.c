// Dado um array int numeros[5] = {2, 4, 6, 8, 10};, use um ponteiro para imprimir todos os seus elementos.
#include<stdio.h>
int main(){
    int numeros[5] = {2, 4, 6, 8, 10};
    int *numbers = &numeros[0];
    int i = 5;

    while (i>0) {
    printf("%d", *numbers++);
    i--;
    }
    return 0;
}