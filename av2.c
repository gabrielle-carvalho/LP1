//Escreva uma função em C chamada shiftTwiceArrayLeft que recebe um array de inteiros e seu tamanho n, e desloca todos os elementos do array para a esquerda em duas posições.
//Os primeiros elementos devem ser movidos para o final do array (comportamento circular). Não utilize alocação dinâmica de memória.

int shiftTwiceArrayLeft(int arr[], int n){
  int valor1 = arr[0];
  int valor2 = arr[1];
  for(int i =2; i<n; i++){
    arr[i-2] = arr[i];
  }
  arr[n] = valor1;
  arr[n-1]=valor2; 
}

int shiftTwiceArrayRight(int arr[], int n){
  int v1 = arr[n];
  int v2 = arr[n-1];

  for(int i = 0; i<n; i++){
    arr[i+2] = arr[i];
  }
  arr[0] = v1;
  arr[1] = v2;
}