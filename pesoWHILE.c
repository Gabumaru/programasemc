#include <stdio.h>
int main(void){
double altura = 0, peso = 0, maior = 0, num = 0, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;

printf("Altura da pessoa 1: Peso da pessoa 1: \n");
scanf("%lf", &a1);
scanf("%lf", &peso);
if (peso > maior){
maior = peso;
num = 1;
altura = a1;
}
while (peso != 0)
{

printf("Altura da pessoa 2: Peso da pessoa 2: \n");
scanf("%lf", &a2);
scanf("%lf", &peso);
if (peso > maior){
maior = peso;
num = 2;
altura = a2;
}
printf("Altura da pessoa 3: Peso da pessoa 3: \n");
scanf("%lf", &a3);
scanf("%lf", &peso);
if (peso > maior){
maior = peso;
num = 3;
altura = a3;
}
printf("Altura da pessoa 4: Peso da pessoa 4: \n");
scanf("%lf", &a4);
scanf("%lf", &peso);
if (peso > maior){
maior = peso;
num = 4;
altura = a4;
}
printf("Altura da pessoa 5: Peso da pessoa 5: \n");
scanf("%lf", &a5);
scanf("%lf", &peso);
if (peso > maior){
maior = peso;
num = 5;
altura = a5;
}
break;
}

printf("A pessoa mais pesada e' a de numero %g, com altura %g" , num, altura);

    return 0;
}