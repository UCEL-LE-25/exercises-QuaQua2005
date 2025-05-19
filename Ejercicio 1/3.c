#include <stdio.h>

int main() {
    char name[50];
    char lastName[50];
    int age;
    int tenAge;
    printf("Ingrese tu nombre: ");
    scanf("%s", name);
    printf("\nIngrese tu apellido: ");
    scanf("%s", lastName);
    printf("\nIngrese tu edad: ");
    scanf("%d", &age);
    tenAge = age + 10;
    printf("Tu nombre es %s\n", name);
    printf("Tu apellido es %s\n", lastName);
    printf("Tu edad es de %d años\n", age);
    printf("Tu edad dentro de 10 años es %d", tenAge);
    return 0;
}