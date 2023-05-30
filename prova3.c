#include<stdio.h>
int main(){
double  sex, altura, peso;
printf("Digite a altura em metros: ");
scanf("%lf", &altura);
printf("Digite 1 para sexo masculino e 2 para feminino: ");
scanf("%lf", &sex);

if(sex == 1){
peso = (72.7 * altura) - 58;
printf("%g", peso); 
}else{ 
if(sex == 2)
peso = (62.1 * altura) - 44.7;
printf("%g", peso);
}
return 0;
}