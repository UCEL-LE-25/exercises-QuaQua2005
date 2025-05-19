#include <stdio.h>

int main() {
    char name[50];
    char lastName[50];
    int age;
    printf("Ingrese tu nombre: ");
    scanf("%s", name);
    printf("\nIngrese tu apellido: ");
    scanf("%s", lastName);
    printf("\nIngrese tu edad: ");
    scanf("%d", &age);
    printf("Tu nombre es %s\n", name);
    printf("Tu apellido es %s\n", lastName);
    printf("Tu edad es de %d años\n", age);

    return 0;
}

