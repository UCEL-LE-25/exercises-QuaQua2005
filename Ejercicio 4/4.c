#include<stdio.h>

int main()
{
    int persons, puntuacion, ins = 0, sat = 0, neu = 0;
    do
    {
        printf("Ingrese la cantidad de personas que van a contestar: \n");
        scanf("%d", &persons);
    } while (persons < 1);
    for (int i = 1; i <= persons; i++)
    {
        printf("\nIngrese la puntuacion: \n");
        scanf("%d", &puntuacion);

        if (puntuacion == 1 || puntuacion == 2)
        {
            printf("Insatisfecho!\n");
            ins++;
        }else if (puntuacion == 3)
        {
            printf("Neutral!");
            neu++;
        }else if(puntuacion == 4 || puntuacion == 5)
        {
            printf("Satisfecho!");
            sat++;
        }
    }
    printf("\ninsatisfechos: %d, neutrales: %d, satisfechos: %d", ins, neu, sat);
}