#include <stdio.h>
#include <math.h>
#define tam 6
int main()
{
    int i = 0;
    double a[tam], resultado = 0, x = 0;

    for (i = 0; i < tam; i++)
    {
        printf("Digite o coeficiente 0:\n");
        scanf("%lf", &a[i]);
    }

    while (1)
    {
        printf("Digite X: ");
        scanf("%lf", &x);
        if (x == 0)
            break;
        else
        {
            resultado = 0;
            for (i = 0; i < tam; i++)
            {
                resultado += a[i] * pow(x, i);
            }
            printf("p(%g) = %g\n", x, resultado);
        }
    }
    return 0;
}