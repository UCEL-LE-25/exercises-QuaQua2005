#include <stdio.h>
#include "asistencia.h"

void loadAttendance(int array[WORKSHOPS][DAYS]){
    for (int i = 0; i < WORKSHOPS; i++){
        for (int j = 0; j < DAYS; j++){
            printf("Taller %d - Dia %d", i+1, j+1);
            printf("\nIngrese asistencia: \n");
            scanf("%d", &array[i][j]);
        }
    }
}

void seeAttendance(int array[WORKSHOPS][DAYS]){
    printf("\nAsistencia por taller y dia:\n");
    for (int i = 0; i < WORKSHOPS; i++){
        printf("Taller %d: ", i+1);
        for (int j = 0; j < DAYS; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void perWorkshop(int array[WORKSHOPS][DAYS]){
    printf("\nTotal y promedio semanal por taller:\n");
    int highestAttendance = 0;
    int topWorkshop = 0;
    for (int i = 0; i < WORKSHOPS; i++){
        int counter = 0;
        for (int j = 0; j < DAYS; j++){
            counter += array[i][j];
        }
        float average = (float)counter / DAYS;
        printf("Taller %d: %d estudiantes | Promedio semanal: %.2f\n", i+1, counter, average);

        if (counter > highestAttendance){
            highestAttendance = counter;
            topWorkshop = i;
        }
    }
    printf("\nEl taller con mayor asistencia total fue el Taller %d con %d estudiantes.\n", topWorkshop+1, highestAttendance);
}

void perDay(int array[WORKSHOPS][DAYS]){
    printf("\nAsistencia total diaria de todos los talleres:\n");
    for (int j = 0; j < DAYS; j++){
        int counter = 0;
        for (int i = 0; i < WORKSHOPS; i++){
            counter += array[i][j];
        }
        printf("Dia %d: %d estudiantes\n", j+1, counter);
    }
}