#include<stdio.h>

#define CMaMM 10
#define CMaM 100

int main()
{
    int option;
    float value;
    float total;
    printf("Ingrese el valor en cm: ");
    scanf("%f", &value);
    printf("Conversion a: \n");
    printf("1) milimetros: \n");
    printf("2) metros: \n");
    printf("Ingrese una opcion: ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        total = value * CMaMM;
        printf("conversion a mm: %.2f", total);
        break;
    case 2:
        total = value / CMaM;
        printf("conversion a m: %.2f", total);
        break;
    default:
        break;
    }
}