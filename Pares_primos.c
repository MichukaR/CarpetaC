#include <stdio.h>
#include <string.h>
int main(void)
{
int num1, valor1, valor2;
int num2;
int i = 1;
int valor = 0;
int divisores = 0;
int comprobante, esprimo[200];
int a = 0;
    do {
        do
        {
            printf("Ingrese el primer numero\n");
            scanf("%d", &num1);
            if (num1<0){
                printf("Escriba un numero positivo\n");
            }
        } while (num1 <= 0);
        do
        {
            printf("Ingrese el segundo numero \n");
            scanf("%d", &num2);
            if (num2<0){
                printf("Escriba un numero positivo\n");
            }
        } while (num2 <= 0);    
        if (num1 > num2){
            valor = num2;
            num2= num1;
        } else {
            valor = num1;
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
        for ( a = 0; a < num2; a++)
        {
            if ((esprimo[a+1] - esprimo[a]) == 2)
            {
                printf("Los numeros %d y %d son numeros primos gemelos.\n", esprimo[a], esprimo[a + 1]);
            }
        }
        printf("\nDesea ingresar otros numeros")
        scanf ()
    } while ();
}