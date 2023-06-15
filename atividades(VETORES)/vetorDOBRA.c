#include <stdio.h>

void dobra(int vetor[],int n){
    for(int i=0; i<n; i++)
        vetor[i] = vetor[i] * 2;
}


    int main(){
        int vetor[5];
       int n =5;
        for(int i =0; i < 5; i++){
            printf("digite um numero: ");
             scanf("%d", &vetor[i]);
            
        }
        dobra(vetor, 5);
        for(int i =0; i<5;i++){
            printf("%d\n", vetor[i]);
        }
    }