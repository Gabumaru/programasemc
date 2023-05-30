#include <stdio.h>
int main(void){
int numero = 0, contador = 1, fatorial = 1;

    printf("Digite N: ");
    scanf("%d", &numero);

    while(contador <= numero){

        fatorial = fatorial * contador;
        contador = contador + 1;
        
    }
      printf("O fatorial de %d e' %d",numero , fatorial);
      

      return 0 ;
}
