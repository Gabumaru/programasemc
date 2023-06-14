#include<stdio.h>
int main(){
    char alg[] = "algoritmos";
    int contador = 0;
    while(alg[contador] != '\0'){
        contador++;
    }

    for(int i = contador -1; i >= 0 ; i--){
        printf("%c", alg[i]);
    }
    
}