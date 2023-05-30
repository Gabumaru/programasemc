#include <stdio.h>
int main(void){
int N = 0, contador = 1, g = 1, num = 0, soma = 0;

printf("Digite N: ");
scanf("%d", &N);

while(N > 0){
num = g * contador;
contador = contador + 1;
g = g + 1;
soma = soma +num;
if(g > N) 
break ;

}
printf("A soma dos quadrados e' %d", soma);
return 0;    
}