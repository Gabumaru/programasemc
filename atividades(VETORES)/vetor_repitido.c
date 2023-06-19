#include <stdio.h>

#define tam 6

int main()
{
    int vetor[tam];
    int contagem[tam] = {0};
    int j, i;

    for (i = 0; i < tam; i++)
    {
        printf("Digite o numero:\n");
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < tam; i++){
        int numeroagora = vetor[i];
        int contador = 0;
    
        for ( j = 0; j < i; j++)
        {
            if (vetor[j] == numeroagora) {
                contador++;
            }
        }
            for (j = i; j < tam; j++)
            {
                if (vetor[j] == numeroagora){
                    contador++;
                }
        }
        contagem[i] = contador + 1;
    }
    for (i = 0; i < tam; i++){
        printf("%d ", contagem[i]);
    }
    return 0;
}