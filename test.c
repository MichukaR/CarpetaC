#include <stdio.h>
int main(void) {
    int opcion, i, residuo, cociente, result1, result2, comp, numero, n3=0, n4=0;
    int n=0;
    int suma=0;
    int n2=1;
    do
    {
        printf ("Seleccione una opcion: \n");
        printf ("1= For   2= While   3=  Do-While   4= Palindromo   5= Numero Amstrong  6=Salir\n");
        scanf ("%d", &opcion );
        switch (opcion)
        {
        case 1:
            printf("FACOTRIAL CON FOR\n");
            printf("Ingrese un numero\n");
            scanf("%d", &numero);
            for (i = numero; i >0; i--)
            {
                n2*=i;
            }
            printf("El resultado es: %d", n2);
            break;
        case 2:
            printf("FACOTRIAL CON WHILE\n");
            printf("Ingrese un numero\n");
            scanf("%d", &numero);
            while (n<numero)
            {
                n+=1;
                n2*=n;
            }
            printf("El resultado es: %d" , n2);
            break;
        case 3:
            printf("FACOTRIAL CON DO WHILE\n");
            printf("Ingrese un numero\n");
            scanf("%d", &numero);
            do
            {
                n+=1;
                n2*=n;
            } while (n<numero);
            printf("El resultado es: %d" , n2);
            break;
        case 4:
            printf("NUMERO PALINDROMO\n");
            printf("Ingrese un numero\n");
            scanf("%d", &numero);
            n=numero;
            do
            {
                residuo= n%10;
                n/=10;
                suma = (suma *10) + residuo;
            } while (n>0);
            

            if (suma==numero)
            {
                printf ("Si es un palindromo");
            } else {
                printf ("No es un palindromo");
            }
            
            break;
        case 5:
            printf("NUMERO ARMSTRONG\n");
            printf("Ingrese un numero \n");
            scanf("%d", &numero);
            for ( i = numero; i >=0 ; i--)
            {
                printf("%d .  %d\n", i, numero);
            }
            
            break;
        case 6:
            printf("SALIR");
                    
        default:
            printf("NUMERO INVALIDO INGRESE DE NUEVO\n");
            break;
        }
    } while (opcion != 6);
    return 0;
}