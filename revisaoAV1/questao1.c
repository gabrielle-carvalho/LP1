#include<stdio.h>
int f(int v, int tam){
    int j, arr[j];
    while(v>0){
    arr[j]= v%10;
    v=v/10;
    // tam++;
    }
    for(j=0; j<tam; j++){
    printf("%d", arr[j]);
    }
}
//fazer função pra interver o array dps

int main(){
    int v, tam;
    printf("Digite o tamanho de digitos do numero ");
    scanf("%d", &tam);
    printf("Digite o numero ");
    scanf("%d", &v);

}
