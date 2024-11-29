// Faça um programa que leia 2 valores inteiros e chame uma funcao que receba estas 2 variaveis 
// e troque o seu conteudo, ou seja, esta funçao é chamada passando duas variaveis A e B por exemplo 
// e, apos a execuçao da funçao, A contera o valor de B e B tera o valor de A.
void troca(int *numberA, int *numberB){
    int temp = *numberA;
    *numberA = *numberB;
    *numberB = temp;
}
int main(){
    int str1, str2;

    printf("Insira dois números: ");
    scanf("%d", &str1);
    scanf("%d", &str2);

    troca(&str1, &str2);
    printf("numero 1 = %d, numero 2 = %d", str1, str2);
}