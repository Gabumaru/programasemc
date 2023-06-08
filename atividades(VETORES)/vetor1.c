#include<stdio.h>
int main(){
int vetor[5], i, x , y, soma;

for(i = 0; i < 5; i++){
    printf("digite um numero: ");
    scanf("%d", &vetor[i]);
}

for(i = 0; i<5; i++){

    printf("\nvetor[%d]\n", vetor[i]);
}

printf("digite duas posicoes: ");
scanf("%d", &y);
scanf("%d", &x);

soma = vetor[y] + vetor [x];

printf("\nA soma das posicoes informadas e: %d", soma);


}