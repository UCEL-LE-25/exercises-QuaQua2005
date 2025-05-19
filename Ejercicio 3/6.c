#include <stdio.h>

int main() {
    int contrasena;
    printf("Ingrese la contraseña: ");
    scanf("%d", &contrasena);
    while (contrasena != 5678) {
        printf("Contraseña incorrecta. Intente nuevamente: ");
        scanf("%d", &contrasena);
    }
    printf("Acceso permitido\n");
    return 0;
}
