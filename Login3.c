#include <stdio.h>
#include <string.h>
int main (void){
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
            printf("Respuesta correcta\n");
            break;
        }
        if (strcmp(usuario, usuario2)==0 && strcmp(pass, pass2)==0){
            printf("Respuesta correcta\n");
            break;
        }
        if (strcmp(usuario, usuario3)==0 && strcmp(pass, pass3)==0){
            printf("Respuesta correcta\n");
            break;
        }
        n2--;
        printf("Usuario o contraseña incorrectos\n");
        printf("Le quedan %d intentos\n" , n2);
    } while (n2>0);
    if (n2==3)
    {
        printf ("Numero de intentos excedido\n");
    } else {
        printf ("Ingresado\n");
    }
    printf("FIN DEL PROGRAMA...");
    return 0;
}