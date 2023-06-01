#include <stdio.h>
int main(void){
int fixo = 0, vendas = 0, total = 0;

printf("Salario fixo: Valor das vendas: ");
scanf("%d", &fixo);
scanf("%d", &vendas);


if(vendas >= 1500){
	total = (fixo + (45 + ((vendas - 1500) * 5/100)));
	printf("Salario total = %d", total);
		
		}else{
if(vendas <= 1499){ 
total = (fixo + (vendas * 3/100));
printf("Salario total = %d", total);}
		}

return 0;
}