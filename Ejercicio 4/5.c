#include<stdio.h>

int main()
{
    float temp[7] = {23, 5, 6, 88, 4, -45, 77};
    float prom;
    int cont = 0;
    prom = (temp[0] + temp[1] + temp[2] + temp[3] + temp[4] + temp[5] + temp[6]) / 7; 
    for (int i = 0; i < 7; i++)
    {
        if (temp[i] > prom)
        {
            cont++;
        }
        
    }
    printf("Temperatura promedio: %.2f\n", prom);
    printf("Dias por encima del promedio: %d", cont);
    return 0;
}