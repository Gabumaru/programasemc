#include <stdio.h>
int main(void){
int i , linha, count = 0, coluna;

printf("Digite um numero: ");
scanf("%d", &linha);

for (i = 1; i <= linha; i++){
    for (coluna = 1; coluna <= i; coluna++)
    {
         count++;
         printf("%d ", count);
    }
        printf(" \n");
}
   return 0 ;
}