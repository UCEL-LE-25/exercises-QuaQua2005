#include<stdio.h>

int main()
{
    int id, clave;
    const int idValido = 2468;
    const int claveValida = 432;
    int intentos = 0;
    int acceso = 0;
    do
    {
        printf("Ingrese ID (Entre 1000 y 9999): \n");
        scanf("%d", &id);
        printf("Ingrese CLAVE(Entre 0 y 999): \n");
        scanf("%d", &clave);
        if (id == idValido && clave == claveValida)
        {
            printf("Acceso Concedido!\n");
            acceso = 1;
        }else
        {
            intentos += 1;
        }
    } while (intentos < 3 && acceso == 0);

    if (!acceso){printf("Acceso Denegado!\n");}
    
    return 0;
}
