#include <stdio.h>
int main() {
    int age;
    printf("Ingrese tu edad: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("\nEres mayor de edad");
    }else{
        printf("\nEres menor de edad");
    }
    
}