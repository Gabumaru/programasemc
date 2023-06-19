#include <stdio.h>

int main()
{

    double num[5], soma = 0, maiores[5], media = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o elemento:\n");
        scanf("%lf", &num[i]);
        soma = soma + num[i];
    }

    media = soma / 5;

    for (int i = 0; i < 5; i++)
    {
        if (num[i] > media)
        {
            maiores[i] = num[i];
            printf("%g ", maiores[i]);
        }
    }
    return 0;
}
