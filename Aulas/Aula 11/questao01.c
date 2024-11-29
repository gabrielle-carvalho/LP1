#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//função de concatenar do meu jeito
char *concat (const char *a, const char *b) {
    char *concatenado = malloc(sizeof(char));
    strcpy(concatenado, a); //copia tudo que está em a
    concatenado[sizeof(concatenado)-1] = '\0'; //forçando o fim da string
    strcat(concatenado, b); //acrescenta a cadeia de caracteres de b em concatenado
    return concatenado;
}

int main(void) {
  char a[20] = "Palavras";
  char b[20] = " juntas";
  char * arr = concat(a, b);
  printf("%s", arr);
  free(arr); //o free tem que ser aqui pois pertence a essa função
}

//função de concatenar que o professor mostrou
// char * concat(const char * a, const char *b){
//   int size = strlen(a) + strlen(b) + 1;
//   char * r = (char *) malloc(sizeof(char)*size);
//   strcpy(r, a);
//   strcat(r, b);
//   return r;
// }
