#include <math.h>
#include <stdio.h>
typedef struct {
  int x;
  int y;
} Ponto;

double dist(Ponto a, Ponto b)
{
  return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main()
{
  Ponto a{.x = 4, .y = 3}, b{.x = 0, .y = 0};
  printf("%f", dist(a, b));
  return 0;
}
