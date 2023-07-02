#include <stdio.h>
#include <math.h>
int main (void){
    int menu, menu2;
    double cateto1, cateto2, angulo1, angulo2, hipotenusa, secante, cosecante;
    printf ("TRIANGULO\n"); 
    do
    {
        printf("\nSeleccione una opcion siendo: \n1= Ingresar 2 CATETOS   2= Ingresar un CATETO y un ANGULO  3=Salir\n");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            do {
                printf("Ingrese el primer cateto\n");
                scanf ("%lf", &cateto1);
                if (cateto1 <= 0) {
                    printf ("Ingrese un numero positvo\n");
                }
            } while (cateto1 <= 0);
            do {
                printf("Ingrese el segundo cateto\n");
                scanf ("%lf", &cateto2);
                if (cateto2 <=0) {
                    printf ("Ingrese un numero positvo\n");
                }
            } while (cateto1 <= 0);
                
            hipotenusa = ((pow(cateto1, 2))+(pow (cateto2,2)));
            hipotenusa = sqrt(hipotenusa);
            angulo1= cateto1/cateto2;
            angulo1= atan (angulo1);
            angulo1 *= 180/ M_PI;
            angulo2 = 180-(angulo1 + 90);
            printf("\nHIPOTENUSA: %.2lf", hipotenusa);
            printf("\nANGULO ALPHA: %.2lf° ", angulo1);
            printf("\nANGULO BETA: %.2lf°\n", angulo2);
            break;
        case 2:
            do
            {
                printf("Ingrese el angulo\n");
                scanf ("%lf", &angulo1);
            } while ((angulo1>=90 || angulo1<0));
            
            do{
            printf("Escriba 1 para ingresar el cateto opuesto y 2 para ingresar el cateto adyecente\n");
            scanf("%d", &menu2);
            switch (menu2)
            {
            case 1:
                do {
                printf("Ingrese el cateto opuesto\n");
                scanf ("%lf", &cateto1);
                if (cateto1 <= 0) {
                    printf ("Ingrese un numero positvo\n");
                }
                } while (cateto1 <= 0);
                angulo2 = 180-(angulo1 + 90);
                cateto2= cateto1 *(tan(angulo1));
                hipotenusa = ((pow(cateto1, 2))+(pow (cateto2,2)));
                hipotenusa = sqrt(hipotenusa);
                printf("\nCATETO 2: %.2lf\n", cateto2);
                printf("HIPOTENUSA: %.2lf", hipotenusa);
                printf("\nANGULO 2: %.2lf°\n", angulo2);

                break;
            case 2:
                do {
                printf("Ingrese el cateto adyecente\n");
                scanf ("%lf", &cateto1);
                if (cateto1 <= 0) {
                    printf ("Ingrese un numero positvo\n");
                }
                } while (cateto1 <= 0);
                angulo2 = 180-(angulo1 + 90);
                cateto2= cateto1 *(tan(angulo1));
                hipotenusa = ((pow(cateto1, 2))+(pow (cateto2,2)));
                hipotenusa = sqrt(hipotenusa);
                printf("\nCATETO 2: %.2lf°\n", cateto2);
                printf("HIPOTENUSA: %.2lf", hipotenusa);
                printf("\nANGULO 2: %.2lf°\n", angulo1);
                break;
            default:
                printf("Opcion no valida \n");
                break;
            }
            } while ((menu2!=1) && (menu2!=2));
            break;
        case 3:
            printf("SALIENDO...\n");

            break;
        
        default:
            printf("> Numero invalido ingrese de nuevo <\n");
            break;
        }
    } while (menu!=3);
    
    return 0;
}