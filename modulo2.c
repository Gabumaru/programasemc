#include <stdio.h>
char media(double nota){
    if (nota >= 0.0 && nota <= 4.9)
       return 'D';
    if(nota >= 5.0 && nota <= 6.9)
       return 'c';
    if(nota >= 7.0 && nota <= 8.9)
       return 'b';
    if (nota >= 9.0 && nota <= 10.0)
       return 'a';
       
       return ' ';
}

main(){
    printf("%c", media(6));
}