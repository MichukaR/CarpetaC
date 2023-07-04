#include <stdio.h>
int main(void){
    float i, base, exponente, aux=1, aux2;
    printf("\nPOTENCIA\n");
    printf("Ingrese el Numero Base: ");
    scanf("%f", &base);
    printf("Ingrese el Exponente: ");
    scanf("%f", &exponente);
    aux2=exponente;
    if (exponente<0){
        exponente=exponente*(-1);
    }
    for ( i = 0; i < exponente ; i++)
    {
        aux= aux * base;
    }
    if (aux2>=0)
    {
        printf("El resultado es: %.0f" , aux);

    } else {
        printf("El resultado en fraccion es: 1/%.0f\n" , aux);
        printf("El resultado en decimal es: %.4f\n" , (1/aux));
    }
    return 0; 
}

