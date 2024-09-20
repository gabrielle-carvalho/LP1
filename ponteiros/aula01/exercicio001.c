#include<stdio.h>

void f(int * n){
    *n *=2;
    //*n = *n *n;
}
int main()
{
    int x=5;
    f(&x);
    printf("%d ", x);
    return 0;
}
