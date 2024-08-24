//Fazer um programa em C que imprime a tabuada de um número lido do terminal
#include <stdio.h>
int main(){
    int num, cont=0, tabuada=0;
    
    printf("Digite um número para ver sua tabuada:");
    scanf("%d", &num);
    
    while(cont<=10){
        tabuada=cont*num;
        printf("%d X %d = %d\n", num, cont, tabuada);
        cont++;
    }
}
