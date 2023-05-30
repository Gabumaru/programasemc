#include<stdio.h>
int main(void) 
{
    int f, c;
	printf("INFORME A TEMPERATURA EM CENTIGRADOS: ");
	scanf("%f",&c);
	f = ((9*c)+160)/5;
	printf("A TEMPERATURA EM FAHRENHEIT FOI: %f" ,f);
	getchar();
	getchar();
return 0;

}




