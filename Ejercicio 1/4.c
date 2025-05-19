#include <stdio.h>

int main() {
    int age;
    int yearBirth;

    printf("Ingrese tu edad: ");
    scanf("%d", &age);
    yearBirth = 2025 - age;
    printf("\nTu año de nacimiento es el %d", yearBirth);
    return 0;
}