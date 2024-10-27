//Dado um array de caracteres char mensagem[] = "Olá";, use um ponteiro para imprimir cada caractere da string.
#include <stdio.h>
int main(){
  char mensagem[]="Ola";
  char *ptr = mensagem;
  int c=0;
  
  int ss = sizeof(mensagem) / sizeof(char);
  printf("quantidade de elementos no array: %d \n", ss);
  
  while(c < sizeof(mensagem)){
    printf("caractere %d: %c\n",c, *ptr++);
    c+=1;
  }
}
