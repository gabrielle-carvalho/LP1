// Escreva uma função void multiplicaPorDois(int *arr, int tamanho) que multiplica cada elemento de um array
// por 2. No main, declare um array int dados[] = {1, 3, 5, 7, 9};, chame a função e imprima o array modificado.

void multiplicaPorDois(int *arr, int tamanho){
    for(int i = 0; i< tamanho; i++){
        arr[i] = arr[i]*2;
    }
}

int main(){
    int dados[] = {1, 3, 5, 7, 9};
    int tam = sizeof(dados) / sizeof(dados[0]);
    multiplicaPorDois(dados, tam);
    
    for(int i=0; i<tam; i++){
        printf("%d", dados[i]);
    }
    return 0;
}