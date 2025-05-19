#include<stdio.h>
#include<stdlib.h>
int main()
{
    int intentos = 0, numIngresado;
    int numAleatorio = 1 + rand() % 100;
    do
    {
        printf("Adivine el numero que se encuentra entre 1 y 100: \n");
        scanf("%d", &numIngresado);

        if (numIngresado > numAleatorio)
        {
            printf("El numero es menor!\n");
            intentos++;
        }else if (numIngresado < numAleatorio)
        {
            printf("El numero es mayor!\n");
            intentos++;
        }
    } while (intentos < 5 && numIngresado != numAleatorio);
    if(intentos == 5 )
    {
        printf("Te quedaste sin intentos. El numero es: %d", numAleatorio);
    }else
    {
        printf("Adivinaste el numero!");
    }
    return 0;
}