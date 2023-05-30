#include <stdio.h>
char conceito(double nota){
    if (nota >= 0.0 && nota <= 4.9)
       return 'D';
    if(nota >= 5.0 && nota <= 6.9)
       return 'C';
    if(nota >= 7.0 && nota <= 8.9)
       return 'B';
    if (nota >= 9.0 && nota <= 10.0)
       return 'A';
   
}
     int main(){
       printf("%c", conceito(6));
}	