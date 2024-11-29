// // Defina um tipo Retângulo para retângulos. Represente um retângulo por seus pontos de 
//extremidade inferior esquerdo e superior direito usando o tipo Ponto acima.
#include<stdio.h>
typedef struct{
    float x;
    float y;
}Ponto;

typedef struct{
    Ponto inferiorEsquerdo;
    Ponto superiorDireito;
} Retangulo;

int main() {
    Retangulo ret;

    printf("Digite as coordenadas do ponto inferior esquerdo (x y): ");
    scanf("%f %f", &ret.inferiorEsquerdo.x, &ret.inferiorEsquerdo.y);

    printf("Digite as coordenadas do ponto superior direito (x y): ");
    scanf("%f %f", &ret.superiorDireito.x, &ret.superiorDireito.y);

    printf("\nRetângulo definido pelos pontos:\n");
    printf("Inferior Esquerdo: (%.2f, %.2f)\n", ret.inferiorEsquerdo.x, ret.inferiorEsquerdo.y);
    printf("Superior Direito: (%.2f, %.2f)\n", ret.superiorDireito.x, ret.superiorDireito.y);

    return 0;
}
