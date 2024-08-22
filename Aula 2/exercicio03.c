//Tente corrigir o loop para imprimir o vetor ao contrário corretamente utilizando unsigned int
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomes[][255] = {"jose", "joao", "jeremias", "jeanne", "jenivaldo"};

    unsigned int ui = 0;

    // Percorrendo em ordem inversa
    for (ui = 4; ui >= 0; ui--)
    {
        printf("Nome: %s\n", nomes[ui]);
        printf("ui: %d\n", ui);
    }
    printf("finalizou a execução %d\n", ui);

    return 0;
}
