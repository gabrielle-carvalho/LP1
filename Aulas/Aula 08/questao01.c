#include <stdio.h>
// Exercício 1
int main()
{
  float number =2.0;
  float *ptr= &number;

  printf("%f ... %f\n", number, *ptr);  //imprime o valor do endereço de memória apontato por *ptr
  printf("%f ... %p", number, ptr);  //imprime o endereço de memória de *ptr
  
  return 0;
}
