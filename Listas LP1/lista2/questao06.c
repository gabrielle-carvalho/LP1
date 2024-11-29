// Questão 6) Crie um programa em C que declare uma estrutura (registro) para o cadastro
// de alunos, no qual:
// Deverão ser armazenados para cada aluno: matrícula, sobrenome (apenas um),
// e ano de nascimento;
// Ao início do programa, o usuário deverá informar o número de alunos que serão
// armazenados;
// O programa deverá alocar dinamicamente a quantidade necessária de memória
// para armazenar os registros dos alunos;
// O programa deverá pedir ao usuário que entre com as informações dos alunos;
// Ao final, mostrar os dados armazenados e liberar a memória alocada.

#include<stdio.h>
#include<stdlib.h>

struct Aluno{
    int matricula;
    char sobrenome[15];
    int anoNascimento;
};

void cadastro_aluno(struct Aluno *alunos){
    printf("Informe a matrícula: ");
    scanf("%d", &alunos ->matricula);

    printf("Informe o sobrenome: ");
    scanf("%s", alunos ->sobrenome);

    printf("Informe o ano de nascimento: ");
    scanf("%d", &alunos -> anoNascimento);
}

int main(){
    int qtd = 0;

    printf("Informe a quantidade de alunos a ser cadastrados: ");
    scanf("%d", &qtd);

    struct Aluno *alunos = (struct Aluno *) (malloc(sizeof(struct Aluno)*qtd));
    if(alunos == NULL){
        printf("ERRO AO ALOCAR");
        return 1;
    }

    for(int i =0; i<qtd; i++){
        printf("Aluno %d\n", i+1);
        cadastro_aluno(&alunos[i]);
    }

    for(int i=0; i<qtd;i++){
        printf("Matricula aluno %d: %d \n", i+1, alunos[i].matricula);
        printf("Sobrenome aluno %d: %s \n", i+1, alunos[i].sobrenome);
        printf("Ano de nascimento aluno %d: %d \n", i+1, alunos[i].anoNascimento);
    }
    free(alunos);
    return 0;
}