// Questão 4) Analisando o código abaixo, crie uma função em C 
//que desaloque a matriz M alocada.

void desalloc (int **M, int m){
    for(int i=0; i<m; i++){
        free(M[i]); // liberando cada linha
    }
    free(M); // liberando o ponteiro pra as linhas
}