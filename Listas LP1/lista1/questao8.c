// Questão 8) Faça uma função em C que calcule a área da superfície e o
// volume de uma esfera de raio r. Essa função deve obedecer ao protótipo:
// void calcEsfera(float r, float *area, float *volume);
#include <stdio.h>
#define pi 3.1415
void calcEsfera(float r, float *area, float *volume){
    *area = 4*pi*(r*r);
    *volume = 4/3 * pi*(r*r*r);
}
