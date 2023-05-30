#include<stdio.h>
int main(){
int num1, num2, soma, sub, div, mult;

printf("Digite N1: ");
scanf("%d", &num1);
printf("Digite N2: ");
scanf("%d", &num2);

soma = (num1 + num2);
sub = (num1 - num2);
div = (num1 / num2);
mult = (num1 * num2);

printf("soma=%d", soma);
printf("sub=%d", sub);
printf("mult=%d", mult);
printf("div=%d", div);
    return 0;
}