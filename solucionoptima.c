#include <stdio.h>

int num1;
int num2;
int i = 1;
int valor = 0;
int divisores = 0;
int comprobante, esprimo[200], opcion;
int a = 0;

int main(void)
{
    do
    {
        do
        {
            do
            {
                printf("Ingrese el primer numero positivo (el numero menor).\n");
                scanf("%d", &num1);
            } while (num1 <= 0);
            do
            {
                printf("Ingrese el segundo numero positivo (el numero mayor)\n");
                scanf("%d", &num2);
            } while (num2 <= 0);
        } while (num1 > num2);
        valor = num1;

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
            printf("Desea ingreasar otro intervalo de numeros? (1 para si, 2 para no)\n");
            scanf("%d", &opcion);
        } while (opcion != 1 && opcion != 2);
        if (opcion ==1 )
        {
           a =0;
        }
        
    } while (opcion != 2);
    return 0;
}