#include <stdio.h>

int main() {
    int option;
    int hours;
    int cost = 0;

    printf("Seleccione el tipo de vehículo:\n");
    printf("1. Moto\n");
    printf("2. Auto\n");
    printf("3. Camión\n");
    printf("Ingrese una opción: ");
    scanf("%d", &option);
    switch (option) {
    case 1:
        printf("Ingrese la cantidad de horas de uso del estacionamiento: ");
        scanf("%d", &hours);
        if (hours <= 2) {
            cost = 1000;
        } else if (hours > 5) {
            cost = 1000 + (hours - 5) * 200;
        } else {
            cost = 1000;
        }
        break;

    case 2:
        printf("Ingrese la cantidad de horas de uso del estacionamiento: ");
        scanf("%d", &hours);
        if (hours <= 2) {
            cost = 1750;
        } else if (hours > 5) {
            cost = 1750 + (hours - 5) * 450;
        } else {
            cost = 1750;
        }
        break;

    case 3:
        printf("Ingrese la cantidad de horas de uso del estacionamiento: ");
        scanf("%d", &hours);
        if (hours <= 2) {
            cost = 2350;
        } else if (hours > 5) {
            cost = 2350 + (hours - 5) * 765;
        } else {
            cost = 2350;
    }
        break;
    }

    printf("El costo del estacionamiento es: $%d\n", cost);

    return 0;
}