#include <stdio.h>
int main() {
    int age;
    int yearfuture;
    int yearBirth;
    int result;
    printf("Ingrese tu edad: ");
    scanf("%d", &age);
    printf("\nIngrese un año en el futuro: ");
    scanf("%d", &yearfuture);
    yearBirth = 2025 - age;
    result = yearfuture - yearBirth;
    printf("\nTu edad en el año %d sera de %d años\n", yearfuture, result);
    
    return 0;
}
