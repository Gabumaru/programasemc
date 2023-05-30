#include <stdio.h>
int main(void){
int num1 = 0, num2 = 0;
printf("Digite o numero A: Digite o numero B: ");
scanf("%d", &num1);
scanf("%d", &num2);

if(num1 > num2){
    printf("Primeiro maior"); }
else{ 
if(num2 > num1){
	printf("Segundo maior");}
if(num1 == num2){
	printf("Numeros iguais");}
	
}

return 0;
}