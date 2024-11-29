// Dado um array de caracteres char mensagem[] = "Olá";, use um ponteiro para imprimir cada caractere da string.
#include<stdio.h>

int main(){
    char mensagem[] = "Olá";
    char *printer = mensagem[0];

    while(printer != '\0'){
        printf("%c", *printer++);
    }
    return 0;
}
