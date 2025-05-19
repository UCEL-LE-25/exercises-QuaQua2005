#include<stdio.h>
#include"promedio.h"

int main(){
    int days;
    float temp;
    float totalTemp;

    printf("Ingrese la cantidad de dias: \n");
    scanf("%d", &days);

    for (int i = 1; i <= days ; i++){
        printf("Ingrese la temperatura del dia %d\n", i);
        scanf("%f", &temp);
        totalTemp += temp;
        printf("Dia: %d Temperatura: %.2f\n",i,temp);
    }

    promedio(days, totalTemp);
}