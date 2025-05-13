#include <stdio.h>

int main() {
    int vida;
    float escudo = 25;
    bool tienePocion = true;

    printf("Ingrese la vida que tiene: \n"); 
    scanf("%d", &vida);                       

    if (vida > 100) {
        printf("No se puede ingresar un valor de vida mayor a 100\n");
    } else if (vida == 100 && escudo > 0) {
        printf("Jugador con vida y escudo\n");
    } else if (vida > 0 || tienePocion == true) {
        printf("Jugador herido pero con posibilidad de curarse\n");
    } else if (vida < 0) {
        printf("Jugador muerto\n");
    } else {
        printf("Estado desconocido, la vida que ingresaste fue %d\n", vida);
    return 0;
    }
}
