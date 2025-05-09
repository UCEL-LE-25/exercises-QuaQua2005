#include <stdio.h>

struct student{
    char name[10];
    int age;
    float note;
};

struct student s[100];

void addStudent(struct student s[], int *studentCount, float *finalNote);
void showStudents(struct student s[], int studentCount);
void calculateAverage(int studentCount, float finalNote);

int main() {
    int opcion;
    int studentCount = 0;
    float finalNote = 0;
    do {
        printf("\n--- Menú ---\n");
        printf("1. Agregar estudiante\n");
        printf("2. Mostrar estudiantes\n");
        printf("3. Calcular promedio de notas\n");
        printf("4. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                addStudent(s, &studentCount,&finalNote);
                break;
            case 2:
                showStudents(s, studentCount);
                break;
            case 3:
                calculateAverage(studentCount, finalNote);
                break;
            case 4:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción inválida.\n");
        }
    } while (opcion != 4);

    return 0;
}

void addStudent(struct student s[], int *studentCount, float *finalNote) {
    printf("\nIngrese el nombre del estudiante: ");
    scanf("%s", s[*studentCount].name);
    printf("Ingrese la edad: ");
    scanf("%d", &s[*studentCount].age);
    printf("Ingrese la nota: ");
    scanf("%f", &s[*studentCount].note);
    *finalNote += s[*studentCount].note;
    (*studentCount)++;
    printf("Alumno agregado\n");
}

void showStudents(struct student s[], int studentCount){
    printf("\n--- Lista de estudiantes ---\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Estudiante %d:\n", i + 1);
        printf("Nombre: %s\n", s[i].name);
        printf("Edad: %d\n", s[i].age);
        printf("Nota: %.2f\n", s[i].note);
    }
}

void calculateAverage(int studentCount, float finalNote ){
    float average = finalNote/studentCount;
    printf("Promedio: %.2f", average);
}
//profe el ejercicio lo termine pero me corrigio alguna cosas el chat porque no puede instalar el ejecutable para probar si funciona
//cosas que me modifico el chat fueron s->name, &s->age, &s->note, &s y void addStudent(struct student *s)