#include <stdio.h>
#define TAM 15

int main()
{
    int seq[TAM], i, comeco, maior_soma, num, tam_seq;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num == 999)
        {
            tam_seq = i;
            break;
        }
        seq[i] = num;
        tam_seq = i + 1;
    }

    maior_soma = 0;
    comeco = 0;
    for (i = 0; i < tam_seq - 3; i++)
    {
        int soma = seq[i] + seq[i + 1] + seq[i + 2] + seq[i + 3];
        if (soma > maior_soma)
        {
            maior_soma = soma;
            comeco = i;
        }
    }

    printf("Maior soma: %d\n", maior_soma);
    printf("Indice do inicio do trecho: %d\n", comeco);

    return 0;
}
