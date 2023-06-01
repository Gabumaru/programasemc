#include <stdio.h>
int main(void){
int periodo = 0;
double paisa = 5000000 , paisb = 7000000 , taxaa = 1.03, taxab = 1.02;

for(periodo , paisa, paisb ; paisb > paisa ; periodo++)
{
  paisa = (paisa * taxaa);
  paisb = (paisb * taxab);
 
}
  printf("A populacao do pais A ultrapassa a do pais B em: %danos", periodo);

    return 0;
}