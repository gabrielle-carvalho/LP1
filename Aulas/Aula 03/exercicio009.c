//Crie um programa em C que leia uma temperatura em graus Celsius e a converta para Fahrenheit.
//O programa deve exibir a mensagem "Frio" se a temperatura em Fahrenheit for menor que 50, e 
//"Quente" se for maior ou igual a 50.
//c=f-32/1.8
//f=1.8*c+32
#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    
    printf("Insira a temperatura em celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit=(1.5*celsius)+32;
    if(fahrenheit<50.0){
        printf("Frio");
    }else{
        printf("Quente");
    }

    return 0;
}
