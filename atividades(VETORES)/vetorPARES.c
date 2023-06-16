#include <stdio.h>

int cont(int *v, int n){
    int pares = 0;
    for(int i=0; i < n; i++){
        if(v[i] % 2 == 0)
        pares++;
    }

    return pares;
}

int main()
{
    int v[] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d", cont(v,10));

    return 0;
}
