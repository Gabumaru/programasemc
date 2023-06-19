#include <stdio.h>
int main()
{
    int vetor[10], i, impares = 1;
    for (i = 0; i < 10; i++)
    {

        vetor[i] = impares;

        impares = impares + 2;
        printf("%d\n", vetor[i]);
    }
}