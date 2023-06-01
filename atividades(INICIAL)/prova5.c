#include<stdio.h>
int main(){
    int nascimento, ingresso, idade, trabalho;

    printf("Ano de nascimento: ");
    scanf("%d", &nascimento);

    printf("Ano de ingresso: ");
    scanf("%d", &ingresso);

 idade = (2023 - nascimento);
 printf("Idade = %d\n", idade);

 trabalho = (2023 - ingresso);
 printf("Tempo de trabalho = %d\n", trabalho);

if (idade >= 65 || trabalho >= 30 || idade >= 60 && trabalho >= 25)
{ printf("Requerer aposentadoria");
} else{
    printf("Nao requerer");
}

return 0 ;
}