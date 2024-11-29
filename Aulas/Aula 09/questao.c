//Dada uma variável inteira contagem = 5, use um ponteiro para incrementar seu valor em 1 e imprima o valor atualizado.
 #include<stdio.h>
int main(){
  int contagem = 5;
  int *ptr = &contagem;
  *ptr +=1;
  printf("%d ", *ptr);
  //o valor de contagem é alterado nesse caso
  printf("%d ", contagem);
  return 0;
}

