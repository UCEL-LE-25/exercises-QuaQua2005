#include<stdio.h>

#define M 100
#define A 200
#define C 300

int main(){
    int option;
    char option2;
    float total;
    printf("Vehiculo: \n");
    printf("1) moto: \n");
    printf("2) auto: \n");
    printf("3) camion: \n");
    printf("Ingrese una opcion: ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        total = M;
        printf("Precio final: %.2f", total);
        break;
    case 2:
        total = A;
        printf("Precio final: %.2f", total);
        break;
    case 3:
        printf("Viajo de noche?(s / n): \n");
        scanf(" %c", &option2);
        if (option2 == 's')
        {
            total = C + (C*0.1);
            printf("Precio final: %.2f", total);
        }else
        {
            total = C;
            printf("Precio final: %.2f", total);
        }
        break;
    default:
        break;
    }
}