#include <stdio.h>
#define tam 6
int main()
{
    int num[tam], aux = 0;

    for (int i = 0; i < tam; i++)
    {
        printf("Digite o elemento %d:\n", i);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < tam; i++)
    {
        aux = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (num[i] == num[j])
                aux = 1;
        }

        if (aux == 0)
            printf("%d ", num[i]);
    }

    return 0;
}