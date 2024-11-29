// Questão 9) Escreva uma função em C que receba um número real
// passado como parâmetro, retorne a parte inteira e a parte fracionária
// deste número. Essa função deve obedecer ao protótipo:
// void frac(float num, int *parteInteira, int *parteFracionaria);
#include <stdio.h>
void frac(float num, int *parteInteira, int *parteFracionaria){
    *parteInteira = (int)num; //pega apenas a parte inteira do float
    *parteFracionaria = num - *parteInteira;
}
