#include<stdio.h>

int main() {
    int sensor = 0;
    int fruta = 0;
    int planta = 0;
    int option;
    
    do {
        printf("Fruta lista para recolectar?(1: si / 0: no): \n");
        scanf("%d", &option);

        switch (option) {
        case 0:
            sensor = 0;
            break;
        
        case 1:
            sensor = 1;
            break;    
        
        default:
            printf("Opcion invalida. Ingrese 0 o 1.\n");
            break;
        }
        
        if (sensor == 1) {
            fruta++;
        }

        planta++;
    } 
    while (planta < 5 && fruta < 1);

    printf("Frutas recolectadas: %d\n", fruta);
    printf("Plantas inspeccionadas: %d\n", planta);

    return 0;
}