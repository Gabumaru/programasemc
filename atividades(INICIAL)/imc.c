#include <stdio.h>
int main(void){
float imc, peso, altura;

printf("Digite seu peso: ");
scanf("%f",&peso);
printf("Digite sua altura: ");
scanf("%f",&altura);

imc = peso/(altura * altura);
printf("Seu imc atual: %.2f", imc);

return 0;
}