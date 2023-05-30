#include <stdio.h>
int main(void)
{

double primeira_nota = 6;
double segunda_nota = 8;
double media = (primeira_nota + segunda_nota) /2 ;

printf ("Digite a primeira nota: ");
scanf ("%lf", &primeira_nota);

printf ("Digite a segunda nota: ");
scanf ("%lf", &segunda_nota);

media = (primeira_nota + segunda_nota) / 2 ;
printf ("Media=%g\n",media );

return 0;
}