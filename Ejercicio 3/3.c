#include <stdio.h>
int main(){
    int valor;
    do{
        printf("Ingrese un número entre 1 y 10: ");
        scanf("%d", &valor);
    }while(valor >= 1 || valor <= 10);
    return 0;
}