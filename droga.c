#include <stdio.h>
int main(void)
{

float primeira_nota;
float segunda_nota;
float media = (primeira_nota + segunda_nota)/2;

printf ("Digite a primeira nota: ");
scanf("%f",&primeira_nota);
printf("Digite a segunda nota: ");
scanf("%f",&segunda_nota);

media = (primeira_nota + segunda_nota)/2;

printf ("Media= %.2f\n",media);


return 0; 
}