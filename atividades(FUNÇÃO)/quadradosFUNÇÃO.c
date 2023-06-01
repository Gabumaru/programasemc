#include <stdio.h>
int main(int argc, const char * argv[]) 
{ 

 //inicialização das variaveis
 
 int num=0;
 int resultado;
 resultado=0;
 
 //receber dados do utilizador
 printf("introduza um numero \n");
 scanf("%d",&num);
 
 resultado=num*num;
 
 printf("0 resultado final e: %d \n",resultado);
 
 return 0;
 }
 