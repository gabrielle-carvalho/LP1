// Escreva uma função void converteParaMaiusculas(char *str) que altera todas as letras minúsculas
//  de uma string para maiúsculas. Teste com a string char texto[] = "Programação";
#include<stdio.h>
void converteParaMaiusculas(char *str){
    while (*str != '\0'){
        if(*str <= 'z' && *str >= 'a'){
            *str-=32;
        }           
        *str++;
    }
}
int main(){
    char texto[] = "Programação";
    converteParaMaiusculas(texto);
    printf("%C", texto);
}