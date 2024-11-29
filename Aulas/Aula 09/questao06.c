//Escreva uma função void reverte(int *arr, int tamanho) que inverte um array. Use-a em int valores[] = {1, 2, 3, 4, 5}; e imprima o array invertido.

#include<stdio.h>

void reverte(int *arr, int tamanho){
    int *inicio = arr; //aponta para a primeira posição do array
    int *fim = arr+tamanho-1; //aponta para o ultimo endereço do array
    
    while(inicio<fim){ //enquanto os 2 nao se encontrarem(meio do array)
        int temporario = *inicio; //temporario guarda temporariamente o valor de inicio pois ele vai ser subs pelo ultimo
        *inicio = *fim; 
        *fim = temporario; //armazena aquele que era o primeiro na ultima posição
        
        inicio++;
        fim--;
    }
}

int main(){
  int valores[] = {1, 2, 3, 4, 5};
  int tam = sizeof(valores)/sizeof(int);
  reverte(valores, tam);
  for(int i=0; i<tam; i++){ //imprime o array que veio invertido da funcao
    printf("posicao %d: %d\n",i, valores[i]);  
  }
  
}
