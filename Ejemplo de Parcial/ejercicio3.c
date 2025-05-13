#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int flechas[10];
    int aciertos = 0;
    int fallos = 0;
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        if (rand() % 100 < 60) {
            flechas[i] = 1;
            aciertos++;
        } else {
            flechas[i] = 0;
            fallos++;
        }
    }

    printf("Aciertos: %d\n", aciertos);
    printf("Fallos: %d\n", fallos);

    printf("Resultado de flechas: { ");
    for (int i = 0; i < 10; i++) {
        printf("%d", flechas[i]);
        if (i < 9) {
            printf(", ");
        }
    }
    printf(" }\n");

    return 0;
}
