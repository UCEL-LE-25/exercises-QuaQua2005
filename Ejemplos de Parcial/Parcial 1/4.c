#include<stdio.h>

typedef struct {
    char name[20];
    float price;
} material;

int main() {
    material tabla = {"Tabla", 50};
    material clavo = {"Clavo", 10};
    material soga = {"Soga", 75};
    int coins;
    float priceFinal = (tabla.price * 2) + (clavo.price * 4) + soga.price;

    printf("Ingrese la cantidad de monedas que posee: ");
    scanf("%d", &coins);

    if (coins >= priceFinal) {
        coins -= priceFinal;
        printf("Compra exitosa!\n");
        printf("Detalles:\n");
        printf("Tabla  x  2  -  $100\n");
        printf("Clavo  x  4  -  $40\n");
        printf("Soga   x  1  -  $75\n");
        printf("Total: $%f\n", priceFinal);
        printf("Monedas restantes: %d", coins);
    } if (coins == soga.price) {
        coins -= soga.price;
        printf("Cantidad de monedas insuficientes para comprar todos los materiales!\n");
        printf("Solo pudo comprar soga!\n");
        printf("Detalles:\n");
        printf("Soga   x  1  -  $75\n");
        printf("Total: $%f\n", soga.price);
        printf("Monedas restantes: %d", coins);
    } else {
        printf("No puede comprar ningun material!\n");
        printf("Cantidad de monedas: %d", coins);
    }

    return 0;
}