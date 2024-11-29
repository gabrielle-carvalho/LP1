// Questão 7) Faça uma função em C que receba duas strings como
// parâmetros e verifique se a segunda string ocorre dentro da primeira. Use
// aritmética de ponteiros para acessar os caracteres das strings.
#include<stdio.h>

int comparar(char str1[], char str2[]){
    char * text2 , *verifica, *text1;
        for (text1 = str1; *text1 != '\0'; text1++){
            text2 = str2;
            if(*text1 == *text2){
                verifica = text1;
                
                while (*verifica != '\0' && *text2 != '\0' && *verifica == *text2) {
                    verifica++;
                    text2++;
                }

                if (*text2 == '\0') {
                    printf("Substring encontrada");
                    return 1;
                }
            }
        }
        return 0;
}
