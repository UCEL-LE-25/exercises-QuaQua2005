#include <stdio.h>
#include "asistencia.h"

int main(){
    int attendance[WORKSHOPS][DAYS] = {0};
    int option;

    do{
        printf("1. Cargar asistencia\n");
        printf("2. Ver asistencia\n");
        printf("3. Asistencia total por taller\n");
        printf("4. Asistencia total por dia\n");
        printf("0. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &option);

        switch(option){
            case 1: loadAttendance(attendance); break;
            case 2: seeAttendance(attendance); break;
            case 3: perWorkshop(attendance); break;
            case 4: perDay(attendance); break;
            case 0: printf("Saliendo del sistema!\n"); break;
            default: printf("Opcion invalida!\n"); break;
        }
    }while(option != 0);

    return 0;
}