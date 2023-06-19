#include <stdio.h>

#define TAM 6

int main()
{
    int vetor[TAM];
    int contagem[TAM] = {0};
    int i, j;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o número:\n");
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < TAM; i++)
    {
        int numerodeagora = vetor[i];
        int contador = 0;

        for (j = 0; j < TAM; j++)
        {
            if (j != i && vetor[j] == numerodeagora)
            {
                contador++;
            }
        }

        contagem[i] = contador + 1;
    }

    for (i = 0; i < TAM; i++)
    {
        printf("%d ", contagem[i]);
    }

    return 0;
}
