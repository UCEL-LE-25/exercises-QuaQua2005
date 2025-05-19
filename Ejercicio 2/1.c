#include <stdio.h>
int main(){
    int number1;
    int number2;
    float result;
    int option;
    printf("Ingrese el primer numero: ");
    scanf("%d", &number1);
    printf("\nIngrese el segundo numero: ");
    scanf("%d", &number2);
    printf("\n--- Menu ---\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
     printf("4. Division\n");
    printf("Ingrese una opción: ");
    scanf("%d", &option);
    switch(option) {
        case 1:
            result = number1 + number2;
            printf("Resultado: %f\n", result);
            break;
        case 2:
            result = number1 - number2;
            printf("Resultado: %f\n", result);
            break;
        case 3:
            result = number1 * number2;
            printf("Resultado: %f\n", result);
            break;
        case 4:
            if (number2 != 0) {
                result = number1 / number2;
                printf("Resultado: %.2f\n", result);
            } else {
                printf("Error: No se puede dividir por cero.\n");
            }
            break;
        default:
            printf("Operación no válida.\n");
            break;
    }
}