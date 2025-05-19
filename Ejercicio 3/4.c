#include <stdio.h>

int main() {
    int pinIngresado;
    int intentos = 0;
    const int PIN_CORRECTO = 1234;
    int acceso = 0;

    do {
        printf("Ingrese el PIN: ");
        scanf("%d", &pinIngresado);
        if (pinIngresado == PIN_CORRECTO) {
            acceso = 1;
            printf("Acceso concedido.\n");
        } else {
            intentos++;
            printf("PIN incorrecto. Intento %d de 3.\n", intentos);
        }
    } while (!acceso && intentos < 3);
    if (!acceso) {
        printf("Acceso denegado.\n");
    }

    return 0;
}
