#include<stdio.h>

void burbuja(int array2[]);
int main() {
    int array1[8], age;
   
    for (int i = 0; i < 8; i++) {
        printf("Ingese edad: \n");
        scanf("%d", &age);

        array1[i] = age;
    }
    burbuja(array1);
    for (int t = 0; t < 8; t++)
    {
        printf("%d", array1[t]);
    }

    return 0;
}
void burbuja(int array2[]) {
    int temp;

    for (int s = 0; s < 8; s++) {
        for (int w = 0; w < 8 - s; w++) {
            if (array2[w] > array2[w + 1]) {
                temp = array2[w];
                array2[w] = array2[w + 1];
                array2[w + 1] = temp;
            }
        }
    }
}