#include <stdio.h>
#include <string.h>
int main (void){
    int opcion, opcion2;
    int n = 0;
    int n2 = 3;
    char usuario [10];
    char usuario1 [10]= "Nico";
    char usuario2 [10]= "NICO";
    char usuario3 [10]= "nico";
    char pass [10];
    char pass1 [10]= "Nic12";
    char pass2 [10] = "niconico";
    char pass3 [10]= "nic123";
    printf("BIENVENIDO\n");
    do
    {
        printf("Ingrese el usuario\n");
        scanf("%s", usuario);
        printf("Ingrese la contraseña\n");
        scanf("%s", pass);
        if (strcmp(usuario, usuario1)==0 && strcmp(pass, pass1)==0){
            printf("- Log in satisfactorio\n");
            break;
        }
        if (strcmp(usuario, usuario2)==0 && strcmp(pass, pass2)==0){
            printf("- Log in satisfacotrio\n");
            break;
        }
        if (strcmp(usuario, usuario3)==0 && strcmp(pass, pass3)==0){
            printf("- Log in satisfactorio\n");
            break;
        }
        n2--;
        printf("- Usuario o contraseña incorrectos\n");
        printf("- Le quedan %d intentos\n" , n2);
    } while (n2>0);
    if (n2==3)
    {
        printf ("- Numero de intentos excedido\n");
    } else {
        do {
            printf ("Que accion desea realizar?\n");
            printf ("1= Hacer compra de boletos  2= Ver las estadisticas  3= Salir\n");
            scanf ("%d", &opcion);
            switch (opcion)
            {
            case 1:
                printf("\n> Compra de boletos\n");
                do{
                    printf("Escoja la pelicula que desea ver siendo\n");
                    printf("1= Superman   2=  Batman\n");
                    scanf ("%d", &opcion2);
                    switch (opcion2)
                    {
                    case 1:
                        /* code */
                        break;
                    
                    default:
                        break;
                    }
                } while (opcion > 3);
                break;
            case 2:
                printf("\nEstadisticas\n");
                break;
            case 3:
                break;
            
            default:
                printf("\nOpcion no valida ingrese de nuevo\n");
                break;
            }
        } while (opcion!=3);
    }
    printf("FIN DEL PROGRAMA...");
    return 0;
}