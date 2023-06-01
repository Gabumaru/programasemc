#include <stdio.h>
int main(){
int idade = 0, contador = 0, contador2 = 0, somadaidade = 0, total_alunos=0;
double media_idade = 0, altura = 0, somaaltura = 0, media_altura = 0;


printf("Idade: ");
scanf("%d", &idade);

while(idade != 0){

 printf("Altura: ");
scanf("%lf", &altura);

if (idade > 20)
{ contador = contador +1; 
 somaaltura = somaaltura + altura;
}

if(altura < 1.70){
    contador2 = contador2 +1;
    somadaidade = somadaidade + idade;
}

printf("Idade: ");
scanf("%d", &idade);
total_alunos = total_alunos +1;

}

printf("A classe tem %d alunos\n", total_alunos);

if (contador2 > 0)
{ media_idade = somadaidade / contador2;
    printf("A idade media dos alunos com menos de 1,70m de altura e' %.2f\n", media_idade);
}else
{
    printf("Nao ha' alunos com menos de 1,70m de altura \n");
}
if(contador > 0){
 media_altura = somaaltura / contador;
    printf("A altura media dos alunos com mais de 20 anos e' %.2f\n", media_altura);

}else
{
    printf("Nao ha' alunos com mais de 20 anos \n");
}




return 0 ;

}