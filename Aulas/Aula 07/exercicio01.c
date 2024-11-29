// Desenvolva um programa em C que solicite ao usuário a entrada de um número inteiro correspondente a um mês do ano
//(1 para janeiro, 2 para fevereiro, e assim por diante). O programa deve então exibir o nome completo do mês correspondente.
//Caso o usuário insira um número fora do intervalo de 1 a 12, o programa deve exibir uma mensagem informando que a entrada é inválida.

// DESAFIO: Caso o usuário digite 0 o mês corrente deve ser obtido e utilizado

#include <stdio.h>

int main()
{
    int value = 0;
printf("Digite um número inteiro de 1 a 12 e descubra seu correspondente mês do ano: ");
scanf("%d", &value);
    switch (value) {
        case 1:
            printf("JANEIRO\n");
            break;
        case 2:
            printf("FEVEREIRO\n");
            break;
        case 3:
            printf("MARÇO\n");
            break;
      case 4:
          printf("ABRIL\n");
          break;
        case 5:
            printf("MAIO\n");
            break;
      case 6:
            printf("JUNHO\n");
        case 7:
            printf("JULHO\n");
            break;
        case 8:
            printf("AGOSTO\n");
            break;
        case 9:
          printf("SETEMBRO\n");
          break;
        case 10:
            printf("OUTUBRO\n");
            break;
        case 11:
            printf("NOVEMBRO\n");
            break;
      case 12:
          printf("DEZEMBRO\n");
          break;      
      
        default:
            printf("Valor inválido, escolha outro");
    }

    return 0;
}
