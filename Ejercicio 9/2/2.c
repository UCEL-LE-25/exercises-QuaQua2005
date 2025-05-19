#include<stdio.h>
int main(){
int matriz [3][3];
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("\ningrese el numero del bloque [%d,%d] de la matriz:", i+1, j+1);
        scanf("%d", &matriz[i][j]);
    }
}
for (int k = 0; k < 3; k++)
{
    for (int l = 0; l < 3; l++)
    {
        printf("%d ", matriz[k][l]);
    }
    printf("\n");
}



}