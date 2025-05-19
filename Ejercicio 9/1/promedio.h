#include<stdio.h>
#include "promedio.h"
void promedio(int days, float totalTemp){
    float prom;
    prom = totalTemp / days;
    printf("Promedio total: %2.f", prom);
}