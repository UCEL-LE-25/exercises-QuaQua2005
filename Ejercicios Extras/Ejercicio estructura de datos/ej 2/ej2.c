#include <stdio.h>

struct {
    int state;
    int printedPages;
} Printer;

Printer p[3][4];

void modifyPrinter(int sector, int numPrinters, int state, int numberPages);
int sectorPages(int sector);
int activePrinters(int sector);
void sectorMorePages(const char *sectors[]);

int main() {
    int option;
    int sector;
    int numPrinters;
    int state;
    int numberPages;

    const char* sectors[3] = {"Administracion", "Tecnica", "Recursos Humanos"};

    do {
        printf("\n---- menu ----\n");
        printf("1. Cargar o modificar el estado y cantidad de páginas impresas\n");
        printf("2. Consultar cuántas páginas imprimió cada sector\n");
        printf("3. Cuántas impresoras activas hay por sector\n");
        printf("4. Sector que más páginas imprimió\n");
        printf("5. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &option);

        switch (option) {
            case 1: {
                printf("Ingrese el sector (1-Administracion, 2-Tecnica, 3-Recursos Humanos): ");
                scanf("%d", &sector);

                if (sector < 1 || sector > 3) {
                    printf("Sector inválido.\n");
                    break;
                }

                printf("Ingrese número de impresora (1 a 4): ");
                scanf("%d", &numPrinters);

                if (numPrinters < 1 || numPrinters > 4) {
                    printf("Número de impresora inválido.\n");
                    break;
                }

                printf("Ingrese estado (0 = inactiva, 1 = activa): ");
                scanf("%d", &state);

                if (state != 0 && state != 1) {
                    printf("Estado inválido.\n");
                    break;
                }

                printf("Ingrese cantidad de páginas impresas: ");
                scanf("%d", &numberPages);

                modifyPrinter(sector, numPrinters, state, numberPages);
                printf("Datos actualizados correctamente.\n");
                break;
            }
            case 2: {
                for (int i = 0; i < 3; i++) {
                    printf("Sector %s imprimió %d páginas.\n", sectors[i], sectorPages(i));
                }
                break;
            }
            case 3: {
                for (int i = 0; i < 3; i++) {
                    printf("Sector: %s\n", sectors[i]);
                    printf("Impresoras activas: %d\n", activePrinters(i));
                }
                break;
            }
            case 4:
                sectorMorePages(sectors);
                break;
            case 5:
                printf("Saliendo del sistema.\n");
                break;
            default:
                printf("Opción inválida.\n");
        }
    } while (option != 5);

    return 0;
}

void modifyPrinter(int sector, int numPrinters, int state, int numberPages) {
    p[sector - 1][numPrinters - 1].state = state;
    p[sector - 1][numPrinters - 1].printedPages = numberPages;
}

int sectorPages(int sector) {
    int total = 0;
    for (int i = 0; i < 4; i++) {
        total += p[sector][i].printedPages;
    }
    return total;
}

int activePrinters(int sector) {
    int active = 0;
    for (int i = 0; i < 4; i++) {
        if (p[sector][i].state == 1) {
            active++;
        }
    }
    return active;
}

void sectorMorePages(const char *sectors[]) {
    int maxPages = 0;
    int sectorWinner = 0;

    for (int s = 0; s < 3; s++) {
        int total = sectorPages(s);
        if (total > maxPages) {
            maxPages = total;
            sectorWinner = s;
        }
    }

    printf("El sector que más páginas imprimió es: %s con %d páginas.\n", sectors[sectorWinner], maxPages);
}