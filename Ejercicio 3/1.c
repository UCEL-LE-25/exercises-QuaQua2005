#include<stdio.h>
#define clienteC 500
#define clienteP 400
#define empresa 1500
int main()
{
    char option;
    float weight;
    float newPrice;

    printf("Tipos de cliente: \n");
    printf("1) Cliente comun\n");
    printf("2) Cliente preferncial\n");
    printf("3) Empresa\n");
    printf("Seleccione un cliente: \n");
    scanf("%c", &option);
    switch (option)
    {
    case 1:
        printf("Ingrese el peso del paquete: ");
        scanf("%.2f", &weight);
        if (weight <= 5)
        {
            printf("Tipo de cliente: CLIENTE COMUN\n");
            printf("Peso del paquete: %.2f\n", weight);
            printf("Costo final: ", clienteC);
        }else if (weight > 5)
        {
            printf("Tipo de cliente: CLIENTE COMUN\n");
            printf("Peso del paquete: %.2f\n", weight);

        }
        break;
    case 2:
        printf("Ingrese el peso del paquete: ");
        scanf("%.2f", &weight);
        break;
    case 3:
        printf("Ingrese el peso del paquete: ");
        scanf("%.2f", &weight);
        break;
    default:
        break;
    }
    return 0;
}