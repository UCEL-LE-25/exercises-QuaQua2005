#include<stdio.h>
#include<stdbool.h>

void bateria(int* bat, int op, bool* cont);

int main() {
    int battery = 100, option;
    bool continuar = true;

    do {
        printf("\nAcciones disponibles: \n");
        printf("1) Recolectar fruta\n");
        printf("2) Cargar bateria\n");
        printf("3) Esperar\n");
        printf("4) Apagar robot\n");
        printf("Seleccione una: ");
        scanf("%d", &option);
    
        bateria(&battery, option, &continuar);

        if (battery == 0) {
            printf("Bateria agotada. El robot se apaga!\n");
            continuar = false;
        }

    } while (continuar);
    
    return 0;
}

void bateria(int* bat, int op, bool* cont) {
    switch (op) {
        case 1:
            if(*bat < 20) {
                printf("Bateria baja, debe cargarlo! No puede recolectar fruta!\n");
                printf("Carga actual: %d\n", *bat);
                *cont = true;
            } else {
                *bat -= 20;
                printf("Carga actual: %d\n", *bat);
                *cont = true;
            }
            break;
            
        case 2:
            if (*bat <= 70) {
                *bat += 30;
            } else if (*bat == 80) {
                *bat += 20;
            } else if (*bat == 90) {
                *bat += 10;
            } else {
                printf("Carga completa!\n");
            }
            printf("Carga actual: %d\n", *bat);
            *cont = true;
            break;
            
        case 3:
            if (*bat < 10) {
                printf("Bateria baja, no puede esperar!\n");
                printf("Carga actual: %d\n", *bat);
                *cont = true;
            }
            else {
                *bat -= 10;
                printf("Carga actual: %d\n", *bat);
                *cont = true;
            }
            break;
            
        case 4:
            printf("Apagando robot!\n");
            *cont = false;
            break;
        default:
            printf("Opcion invalida!\n");
            *cont = true;
            break;
    }
}