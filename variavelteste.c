#include <stdio.h>
int main(){

float peso ,altura ,imc;

printf ("Digite seu peso: ");
scanf("%f",&peso);
printf ("Digite sua altura: ");
scanf("%f",&altura);

imc = peso/(altura*altura);
printf("Seu IMC atual: %.2f\n\n", imc);


printf("IMC	CLASSIFICACAO	OBESIDADE (GRAU)\n\n");
printf ("MENOR QUE 18,5	\tMAGREZA      	0\n");
printf ("ENTRE 18,5 E 24,9	NORMAL	     \t0\n");
printf ("ENTRE 25,0 E 29,9	SOBREPESO    \tI\n");
printf ("ENTRE 30,0 E 39,9	OBESIDADE	II\n");
printf ("MAIOR QUE 40,0	 OBESIDADE GRAVE \tIII");

}