#include <stdio.h>
#include<stdio.h>
int main(){
    int count = 0;
double valor = 0, num1 = 1, num2 = 1, resultado = 0, parcela = 0;
printf("Digite um limite pequeno, menor que 1: ");
scanf("%lf", &valor);
while(valor <= 1){
    resultado = resultado + (parcela = num1/(pow(num2,2)));
    num2++;
    count++;
    if( parcela < valor){
        break;
    }
}

printf("Foram somados %d termos\n", count);
printf("Soma = %g", resultado);
    return 0;
}