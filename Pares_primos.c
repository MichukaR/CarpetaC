#include <stdio.h>
#include <string.h>

int num1;
int num2;
int i = 1;
int valor = 0;
int divisores = 0;
int comprobante, esprimo[200];
int a = 0;
char opcion [10];
char opcion2 [10] = "no";
char opcion3 [10] = "si";
int main(void)
{
    do
    {
            do 
            {
                printf("Ingrese el primer numero\n");
                scanf("%d", &num1);
                if (num1<0)
                {
                    printf("Escriba un numero positivo\n");
                }
                
            } while (num1 <= 0); 

            do
            {
                printf("Ingrese el segundo numero\n");
                scanf("%d", &num2);
                if (num2<0)
                {
                    printf("Escriba un numero positivo\n");
                }
            } while (num2 <= 0);
        if (num2<num1)
        {
            valor= num2;
            num2 = num1;
        } else {
            valor= num1;
        }
                
        do
        {
            do
            {
                comprobante = valor % i;
                if (comprobante == 0)
                {
                    divisores++;
                }
                i++;
            } while (i < (valor + 1));
            if (divisores > 2)
            {

                divisores = 0;
            }
            else
            {

                esprimo[a] = valor;
                divisores = 0;
                a++;
            }

            valor = valor + 1;
            i = 1;
        } while (valor < num2 + 1);
        for (a = 0; a < num2; a++)
        {
            if ((esprimo[a + 1] - esprimo[a]) == 2)
            {
                printf("Los numeros %d y %d son numeros primos gemelos.\n", esprimo[a], esprimo[a + 1]);
            }
        }

        do
        {
            printf("Desea ingreasar otro intervalo de numeros?\n");
            scanf("%s", opcion);
            if (strcmp(opcion,opcion3)!=0  && strcmp(opcion,opcion2)!=0)
            {
                printf("Opcion no valida ingrese de nuevo\n");
            }
            
        } while (strcmp(opcion,opcion3)!=0 && strcmp(opcion,opcion2)!=0);
        a=0;
        i = 1;
        num1 = 0; 
        num2=0;
    } while (strcmp(opcion,opcion2)!=0);
    return 0;
}