#include <stdio.h>
#include "estudiantes.h"


struct student{
    char name[10];
    int age;
    float note;
};

struct student s;

void addStudent(struct student *s);

int main() {
    int opcion;
    do {
        printf("\n--- Menú ---\n");
        printf("1. Agregar estudiante\n");
        printf("2. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);
        switch(opcion) {
            case 1:
                addStudent(&s);
                break;
            case 2:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción inválida.\n");
        }
    } while (opcion != 2);

    return 0;
}

void addStudent(struct student *s) {
    printf("\nIngrese el nombre del estudiante: ");
    scanf("%s", s->name);
    printf("\nIngrese la edad: ");
    scanf("%d", &s->age);
    printf("\nIngrese la nota: ");
    scanf("%f", &s->note);
    printf("Alumno agregado.\n");
}

//profe el ejercicio lo termine pero me corrigio alguna cosas el chat porque no puede instalar el ejecutable para probar si funciona
//cosas que me modifico el chat fueron s->name, &s->age, &s->note, &s y void addStudent(struct student *s)