#include <stdio.h>

char conceito(double nota) {
    if (nota >= 0 && nota <= 4.9)
        return 'D';
    else if (nota >= 5 && nota <= 6.9)
        return 'C';
    else if (nota >= 7 && nota <= 8.9)
        return 'B';
    else if (nota >= 9 && nota <= 10)
        return 'A';
    else
        return '\0'; // retorna caractere nulo se a nota estiver fora do intervalo
}

int main() {
    double media;
    printf("Digite a média final do aluno: ");
    scanf("%lf", &media);
    char conceito_aluno = conceito(media);
    
    if (conceito_aluno != '\0')
        printf("Conceito do aluno: %c\n", conceito_aluno);
    else
        printf("Nota inválida\n");
    
    return 0;
}
