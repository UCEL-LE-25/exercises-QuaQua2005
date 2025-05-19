#include<stdio.h>
#include<string.h>
int main()
{
    char cad1[] = "Hola";
    char cad2[] = "Mundo";
    char saludo[20];
    strcpy(saludo, cad1);
    strcat(saludo, cad2);
    printf("%s", saludo);
    return 0;
}