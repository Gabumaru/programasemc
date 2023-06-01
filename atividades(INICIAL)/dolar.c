#include <stdio.h>
int main () {
	
double qtd_dolar = 100;
double valor_dolar = 5.76;
double total = qtd_dolar * valor_dolar;


printf ("Valor do dolar: ");
scanf ("%lf", &valor_dolar);
printf ("Quantidade de dolares: ");
scanf ("%lf", &qtd_dolar);


total = valor_dolar * qtd_dolar;
printf ("R$ %g\n",total );


return 0;

}