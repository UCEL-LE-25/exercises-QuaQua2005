#include<stdio.h>

int main()
{
    int num, i = 1;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    do
    {
        printf("%d\n", num*i);
        i++;
    } while (i <= 10);
    return 0;
}