#include<stdio.h>
#include<string.h>

int main()
{
    char mensaje[] = "C check";
    char buffer[10];
    int origen = strlen(mensaje);
    int destino = sizeof(buffer) - 1;

    if(origen <= destino)
    {
        strncpy(buffer, mensaje, destino);
        printf("%s\n", buffer);
    }
    else
    {
        printf("No hay suficiente espacio en la cadena 'buffer'!\n");
    }

    return 0;
}