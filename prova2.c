#include <stdio.h>
int main(){
int num;
printf("Digite um numero: ");
scanf("%d", &num);

if (num <= 10)
       printf("F1");

else{
        if(num <= 100)
             printf("F2");
 else {

    printf("F3");
}


}



return 0; }