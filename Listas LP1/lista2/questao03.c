// Questão 3) Faça um programa em C que receba do usuário o 
//tamanho de uma string e chame uma função para alocar 
//dinamicamente essa string. Em seguida o usuário deverá
// informar o conteúdo dessa string e o programa deve imprimir
// a string sem suas vogais.

#include<stdio.h>
#include<stdlib.h>

void removeVogais(char *str){
    int tamanho = strlen(str);
    char *resultado = malloc((tamanho+1) * (sizeof(char)));
    if(resultado == NULL){
        printf("Erro ao alocar");
        return;
    }
    int j=0;
    for(int i = 0; i<tamanho; i++){
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u'
            && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'){
            resultado[j++] = str[i];
        }
    }
    resultado[j]='\0';
    printf("A string digitada sem vogais: %s\n", resultado);
    free(resultado);
}

int main(){
    int tam=0;

    printf("Digite o tamanho da string a ser digitada:\n");
    scanf("%d", &tam);
    getchar(); // Limpa o buffer do teclado

    char *str = malloc((tam+1) * (sizeof(char)));
    if(str == NULL){
        printf("Erro ao alocar");
        return 1;
    }

    printf("Digite a string: ");
    scanf("%s", str);
    removeVogais(str);

    free(str);
    return 0;

}