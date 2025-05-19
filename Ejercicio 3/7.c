#include<stdio.h>

int main()
{
    float amount, totalAmounts = 0;
    int totalSales = 0, days = 0, dailySales;
    char continuar = 's';
    while (continuar == 's' || continuar == 'S')
    {
        dailySales = 0;
        printf("Ingrese el monto(valor negativo para finalizar): \n");
        scanf("%f", &amount);
        while (amount >= 0)
        {   
            totalAmounts += amount;
            dailySales++;
            totalSales++;

            printf("Ingrese el monto(valor negativo para finalizar): \n");
            scanf("%f", &amount);
        }
        if (dailySales > 0){days++;}
        printf("Quiere ingresar otro dia? (s/n): \n");
        scanf(" %c", &continuar);
    }

    if (days > 0 && totalSales > 0)
    {
        float averagePerDay = (float)totalSales / days;
        float percentagePerDay = (averagePerDay / totalSales) * 100;
        printf("\nMONTO TOTAL: %.2f\n", totalAmounts);
        printf("VENTAS TOTALES: %d\n", totalSales);
        printf("PROMEDIO DE VENTAS POR DIA: %.2f\n", averagePerDay);
        printf("PORCENTAJE DE VENTAS POR DIA: %.2f%%\n", percentagePerDay);
    }
    else
    {
        printf("NO SE REGISTRARON VENTAS!");
    }
    return 0;
}