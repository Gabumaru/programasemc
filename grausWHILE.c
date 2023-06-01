#include <stdio.h>
int main(void) {

int fahren = 1, celsius = 0, vazio;

printf("Graus F: ");
scanf("%d", &fahren);

while (fahren >= -459.67)
{
   celsius = (fahren - 32) * 5/9;
   printf("%d",celsius);
}

printf("%d", vazio);
    return 0;
}