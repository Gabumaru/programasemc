#include<stdio.h>
int main(){
    char alg[] = "algoritmos";
    int contador = 0;
    while(alg[contador] != '\0'){
        contador++;
    }
    
    printf("A string %s tem %d caracteres", alg, contador);
    
}