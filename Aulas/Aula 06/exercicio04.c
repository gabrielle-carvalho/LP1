// // Defina um tipo Retângulo para retângulos. Represente um retângulo por seus pontos de 
//extremidade inferior esquerdo e superior direito usando o tipo Ponto acima.
#include<stdio.h>
float altura=0, largura=0, area=0;

typedef struct{
    float x;
    float y;
}Ponto;

typedef struct{
    Ponto inferiorEsquerdo;
    Ponto superiorDireito;
} Retangulo;

float calcularArea(Retangulo ret){
    largura=ret.superiorDireito.x - ret.inferiorEsquerdo.x;
    altura=ret.superiorDireito.y - ret.inferiorEsquerdo.y;

    return largura*altura;
}

int main() {
    Retangulo ret;

    printf("Digite as coordenadas do ponto inferior esquerdo (x y): ");
    scanf("%f %f", &ret.inferiorEsquerdo.x, &ret.inferiorEsquerdo.y);

    printf("Digite as coordenadas do ponto superior direito (x y): ");
    scanf("%f %f", &ret.superiorDireito.x, &ret.superiorDireito.y);
    
    float area = calcularArea(ret);
    
    printf("Área do retângulo: %.2f\n", area);

    return 0;
}
