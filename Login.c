#include <stdio.h>
#include <string.h>
#define MAXRET 5000;
int main(void){
    char usuario [20]="Nico";
    char usuarioing [20];
    int pass, opcion;
    int saldo =1000;
    printf ("Su nombre de usuario es Nico\n");
    printf ("Su contraseña es 1234\n");
    printf ("Ingrese su nombre de usuario\n");
    scanf ("%s" , usuarioing);
    printf ("Ingrese su contraseña\n");
    scanf ("%i" , &pass);
    if (strcmp(usuarioing, usuario)==0 && (pass==1234)) {
        printf("Nombre de usuario correcto\n");
        printf("BIENVENIDO\n");
        printf("Ingrese una opcion\n");
        printf("1 = Ver saldo en la cuenta\n");
        printf("2 = Depositar dinero\n");
        printf("3 = Retirar dinero\n");
        printf("4 = Salir\n");
        scanf ("%i", &opcion);
        switch (opcion){
            case 1:
                printf("SALDO\n");
                printf("Su saldo inicial es de %i\n" , saldo );
                break;
            case 2:
                printf("DEPOSITO\n");
                break;
            case 3:
                printf("RETIRO\n");
                break;  
        
            default:
            printf("Numero no valido\n");
            break;
        }
        
    } else {
        printf ("Credenciales incorrectas\n");
    };
    return 0;
}
