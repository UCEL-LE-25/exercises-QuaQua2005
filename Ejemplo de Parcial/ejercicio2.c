#include <stdio.h>
int main() {
    int dañoBase = 40;
    int mana;
    float dañoTotal;
    printf("ingrese el mana entre 120 y 300\n");
    scanf("%d", &mana);
    if (mana < 120 || mana > 300)
    {
        printf("no se puede ingresar un valor mayor o menor al que te pido \n");
        return 1;
    }
    
    dañoTotal = 0.15*mana + dañoBase;
    if (dañoTotal > 80)
    {
        printf("Critical Hit\n");
    }else{
        printf("Normal Hit");
    }
    printf("Daño total infligido es de %.0f\n", dañoTotal);
    return 0;
}