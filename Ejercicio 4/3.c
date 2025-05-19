#include<stdio.h>

int main()
{
    int num;
    printf("Ingrese un numero: \n");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("FizzBuzz");
    }else if (num % 3 == 0)
    {
        printf("Fizz");
    }else if (num % 5 == 0)
    {
        printf("Buzz");
    }
    return 0; 
}