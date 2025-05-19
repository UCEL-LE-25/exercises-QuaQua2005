#include<stdio.h>
#include<stdbool.h>

void addParts(int* inspectedParts, int* aceptedParts, int* rejectedParts);

int main() {
    int inspectedParts = 0, aceptedParts = 0, rejectedParts = 0;

    addParts(&inspectedParts, &aceptedParts, &rejectedParts);

    printf("\nPiezas inspeccionadas: %d\n", inspectedParts);
    printf("Piezas acceptadas: %d\n", aceptedParts);
    printf("Piezas rechazadas: %d\n", rejectedParts);
}

void addParts(int* inspectedP, int* aceptedP, int* rejectedP) {
    bool continuar = true;
    int weight, diameter, hardness;
    int rejectedParts10 = 0;
    char letter;

    do {
        printf("\nIngrese el peso: ");
        scanf("%d", &weight);
        printf("\nIngrese el diametro: ");
        scanf("%d", &diameter);
        printf("\nIngrese la dureza: ");
        scanf("%d", &hardness);

        (*inspectedP)++;

        if (weight >= 50 && (diameter >= 10 && diameter <= 20) && hardness >= 70 ) {
            (*aceptedP)++;
            rejectedParts10 = 0;
        } else {
            (*rejectedP)++;
            rejectedParts10++;
        }

        if (rejectedParts10 == 10) {
            printf("\nSe rechazaron 10 piezas seguidas! Finaliza el ingreso.");
            continuar = false;
        } else {
            printf("\nDesea ingresar otra pieza(s/n): ");
            scanf(" %c", &letter);
            if (letter == 'n') {
                continuar = false;
            }
        } 
    } while (continuar == true);
}