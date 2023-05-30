#include <stdio.h>
int fatorial(int n){
int fat = 1;
if(n != 0){
while(n > 1){
   fat = fat * n;
   n = n -1;
    }
return fat;
}
else return 1;
}
int main(){
    printf("%d\n", fatorial(5));
}