#include <stdio.h>
int main (void) {
    int vector [5];
    int vector2 [5];
    int sumavec [5];
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el vector %d: " , i+1);
        scanf("%d", &vector[i]);
    }
    for (int i = 4; i > 0; i--)
    {
        printf("Ingrese el vector numero 2 %d: " , i+1);
        scanf("%d", &vector2[i]);
    }
    printf ("Los datos son :\n");
    for (int i = 0; i < 5 ; i++)
    {
        sumavec [i] = vector [i] + vector2 [i];
        printf("la %d suma es : %d\n", i+1 ,sumavec[i]);
    }
    
    return 0;
}