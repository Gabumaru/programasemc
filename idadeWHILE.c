#include <stdio.h>
int main(void){

int idade = 0, media = 0, contador = 0, soma = 0;
printf ("Idade: ");
scanf("%d", &idade);

while(idade >= 0){
    soma = soma + idade;
    contador = contador + 1; 
printf ("Idade: ");
scanf("%d", &idade); 

if (idade < 0) 
break;

}
media = soma / contador;
printf("\nA média de idade é %d", media);
    return 0;
}