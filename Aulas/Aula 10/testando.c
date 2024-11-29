#include<stdio.h>
#include<stdlib.h>

int main(){
int tam=5;
int *x = malloc(sizeof(int)*tam);
// int *x = (int *) malloc(sizeof(int)*tam);

if(x == NULL){
  printf("ERRO AO ALOCAR");
  return 1;
}

for(int i=0; i<tam; i++){
 x[i] = i;
 printf("%d", x[i]);
}

x = realloc(x, 8 * sizeof(int));

if(x == NULL){
  printf("ERRO AO ALOCAR");
  free(x); //chama o free no realloc quando dá erro para nao dar problema na estrutura de malloc previa
  return 1;
}

free(x);
return 0;
}
