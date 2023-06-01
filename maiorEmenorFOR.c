#include <stdio.h>
int main(void){

int num = 0,i = 0, maiores = 0, menor = 0, soma1 = 0, soma2 = 0;

for (i = 1; i <= 10; i++)
{
printf("Digite 10 numeros inteiros: ");
scanf("%d", &num);

if(num >= 0){
maiores++ ;
soma1 = num + soma1;
}
if(num < 0){
menor++ ;
soma2 = num + soma2; }

}

printf("Quantidade de numeros digitados maiores ou igual a 0: %d\n", maiores);

printf("Quantidade de numeros digitados menores que 0: %d\n", menor);

printf("Soma de todos os numeros digitados maiores que zero: %d\n", soma1);

printf("Soma dos numeros digitados menores que zero: %d\n", soma2);


    return 0;
}