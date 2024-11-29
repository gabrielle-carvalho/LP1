// Questão 10) Faça uma função em C que recebe como parâmetro um
// array com N valores, retornando o maior elemento do array e o número
// de vezes que esse elemento ocorreu no array. Por exemplo, para um
// array com os seguintes elementos: [5,2,15,3,7,15,8,6,15], a função deve
// retornar para o programa o valor 15 e o valor 3. (indicando que o número
// 15 ocorreu 3 vezes). A função deve ser do tipo void.
#include <stdio.h>
void counting(int arr[], int tam){
    int maior = arr[0];
    int ocorre = 0;
    for (int i = 0; i < tam; i++){
        if(arr[i] > maior){
            maior = arr[i];
            ocorre = 1;
        }
        else if(arr[i] == maior){
            ocorre++;
        }
    }
}