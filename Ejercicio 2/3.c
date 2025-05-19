#include<stdio.h>

#define A 100
#define B 200
#define C 300

int main()
{
    char option;
    int amount;
    float total;
    printf("Product (A, B o C): \n");
    scanf("%c", &option);
    printf("Amount: \n");
    scanf("%d", &amount);
    if (option == 'A' || option == 'a')
    {
        if (amount >= 10)
        {
            total = (A * amount) - (A * 0.1);
            printf("Total: %.2f\n", total );
            printf("Descuento aplicado del 10");
        }else
        {
            total = (A * amount);
            printf("Total: %.2f", total);
        }
    }else if (option == 'B' || option == 'b')
    {
        if (amount >= 10)
        {
            total = (B * amount) - (B * 0.1);
            printf("Total: %.2f\n", total );
            printf("Descuento aplicado del 10");
        }else
        {
            total = (B * amount);
            printf("Total: %.2f", total);
        }
    }else if (option == 'C' || option == 'c')
    {
        if (amount >= 20)
        {
            total = (C * amount) - (C * 0.2);
            printf("Total: %.2f\n", total );
            printf("Descuento aplicado del 20");
        }else if (amount >= 10)
        {
            total = (C * amount) - (C * 0.1);
            printf("Total: %.2f\n", total );
            printf("Descuento aplicado del 10");
        }else
        {
            total = (C * amount);
            printf("Total: %.2f", total);
        } 
    }   
}