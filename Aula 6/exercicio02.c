// Crie uma struct que represente um aluno com os seguintes campos: nome, matricula (um número inteiro) e nota (um valor float). Escreva um programa que permita:
//     Adicionar alunos a um array.
//     Exibir todos os alunos com seus detalhes.
//     Pesquisar um aluno pelo número de matrícula e exibir seus detalhes.
#include<stdio.h>
#define NOME_MAX_LEN 50
#define MAX_ALUNOS 45

typedef struct{
char nome[NOME_MAX_LEN+1];
int matricula;
float nota;
} Aluno;

void adicionaAluno(Aluno alunos[], int *numAlunos) {
    if (*numAlunos >= MAX_ALUNOS) {
        printf("Limite de alunos atingido!\n");
        return;
    }
    
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]s", alunos[*numAlunos].nome);
    
    printf("Digite a matrícula: ");
    scanf("%d", &alunos[*numAlunos].matricula);
    
    printf("Digite a nota: ");
    scanf("%f", &alunos[*numAlunos].nota);
    
    (*numAlunos)++;
}
//         Adicionar Aluno: Uma função para adicionar um aluno a um array.


void exibeAluno(Aluno aluno) {
    printf("Nome do aluno: %s\n", aluno.nome);
    printf("Matrícula do aluno: %d\n", aluno.matricula);
    printf("Nota do aluno: %.2f\n", aluno.nota);
}

void exibeTodosAlunos(Aluno alunos[], int numAlunos) {
    for (int i = 0; i < numAlunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        exibeAluno(alunos[i]);
    }
}
 
  //         Exibir Alunos: Uma função para exibir todos os alunos no array.

int pesquisaAluno(Aluno alunos[], int numAlunos){
    int matricula;

    printf("Digite o número de matrícula: ");
    scanf("%d", &matricula);
    for (int i = 0; i < numAlunos; i++) {
        if (alunos[i].matricula == matricula) {
            printf("Aluno encontrado:\n");
            exibeAluno(alunos[i]);
            return 1;
        }
    }
    printf("Aluno de matrícula %d não encontrado.", matricula);
    return 0;
  //         Pesquisar Aluno: Uma função para pesquisar um aluno pelo número de matrícula.

}


int main() {
    Aluno alunos[MAX_ALUNOS];
    int numAlunos = 0;
    int opcao;

    do {
        printf("Clique em 1, 2, 3 ou 0\n");
        printf("1. Adicionar Aluno\n");
        printf("2. Exibir Todos os Alunos\n");
        printf("3. Pesquisar Aluno por Matrícula\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionaAluno(alunos, &numAlunos);
                break;
            case 2:
            if (numAlunos > 0) {
                    exibeTodosAlunos(alunos, numAlunos);
                } else {
                    printf("Nenhum aluno cadastrado.\n");
                }
            case 3:
                pesquisaAluno(alunos, numAlunos);
                break;
            case 0:
                printf("Fim do programa.\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}

//         Na função main, crie um array de alunos, adicione alguns alunos a ele e,
//em seguida, use as outras funções para exibir e pesquisar alunos.
