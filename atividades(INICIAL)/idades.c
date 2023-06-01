#include <stdio.h>
int main(void){

int Idade = 0;
printf("Idade: ");
scanf("%d", &Idade);

if(Idade >= 18 && Idade <= 67){
printf("Pode doar sangue");
	
}else{
	printf("Nao pode doar sangue");}
	
	
return 0;
}	