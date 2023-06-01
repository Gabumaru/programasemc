#include <stdio.h>
int main(void){
int num, count, i;

printf("Digite um numero: ");
scanf("%d", &num);
for (i = 1; i <= num; i++){
   if(num % i == 0)
   count ++;
}
if (count == 2)
     printf("O numero %d e primo", num);
else
    printf("O numero %d nao e primo", num);

    return 0;
}