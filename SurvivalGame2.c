#include <stdio.h>
#include <string.h>
int main (void){
    int opcion1, opcion2;
    int n=0;
    int n2=0;
    int n3=0;
    int salud=50;
    int hambre=50;
    int sed=50;
    char respuesta1 [10]="Si";
    char respuesta2 [10]="si";
    char rdaga1 [10]="Si";
    char rdaga2 [10]="si";
    char rbotella1 [10]="Si";
    char rbotella2 [10]="si";
    char respuesta [10];
    char respuestaalert [10];
    char daga [10];
    char botella [10];
    printf("\n");
    printf("-->>  BIENVENIDO  <<--");
    printf("\n");
    do
    {
        printf("\n");
        printf("Seleccione una opcion\n");
        printf("1= Jugar  2= Creditos 3= Salir\n");
        scanf("%d", &opcion1);
        switch (opcion1)
        {
        case 1:
            printf("\n");
            printf("Eres un sobreviviente de una apocalipsis...\n");
            printf("Te encuentras dentro del laboratorio donde se desarrollo todo y tienes que encontrar \n");
            printf("el antidoto para poder restaurar el mundo.\n");
            printf("Te tomara 5 dias llegar hasta la sala de contencion donde se encuentra el antidoto, ya que \n");
            printf("cada dia bajaras un piso y este esta en el piso -5, asi que tendras que buscar comida y agua \n");
            printf("dentro de todo el laboratorio para sobrevivir.\n");
            printf("Aqui hay varios experimentos que se han escapado, por eso recomiendo buscar\n");
            printf("objetos que te ayudaran a combatirlos o tal vez te ayudaran mas tarde...\n");
            printf("\n");
            printf("Te tomara un dia realizar cada accion \n");
            printf("Cuando estes en el piso -5 no olvides 'buscar objetos' para encontrar el ANTIDOTO\n");
            printf("\n");
            printf("> Desea iniciar el juego?\n");
            scanf ("%s" , respuesta);
            if (strcmp(respuesta, respuesta1)==0 || strcmp(respuesta, respuesta2)==0) {
                do
                {
                n=n+1;
                if (n==5)
                {
                    printf("Recuerda que para encontrar el antidoto necesitas 'Buscar objetos'.\n");
                }
                if (n==3)
                {
                    printf("Recuerda que tu salud no puede bajar de 0 tu sed pasar de 100 y tener mas de 100 de hambre\n");
                }
                
                if (n==4)
                {
                    printf(">>>  ALERTA!  <<<\n");
                    printf(">> Se ha encontrado con el experimento 873 \n");
                    printf(">> Parece una criatura inocente pero es muy peligrosa \n");
                    printf("\n");
                    printf(">> Desea usar una daga o puñal? \n");
                    scanf ("%s" , respuestaalert);
                    if ((strcmp(respuestaalert, respuesta1)==0 || strcmp(respuestaalert, respuesta2)==0))
                    {
                        if (n3>0)
                        {
                            printf("\n");
                            printf("La criatura ataco pero pudimos defendernos\n");
                            printf("podemos usar su carne como alimento\n");
                            hambre=hambre-20;
                            salud=salud-10;
                        }else{
                            printf("\n");
                            printf("No tiene daga ni puñal\n");
                            printf("La criatura ataco\n");
                            salud=salud-30;
                        }
                    } else {
                        printf("\n");
                        printf("La criatura ataco\n");
                        salud=salud-30;
                    }
                    
                }
                printf("\n");
                printf("DIA %d || PISO -%d\n", n, n);
                printf("\n");
                printf("> Estas son tus estadisticas\n");
                printf(">> SALUD=%d\n" , salud);
                printf(">> HAMBRE=%d\n" , hambre);
                printf(">> SED=%d\n" , sed);
                printf("\n");        
                printf("Seleccione una accion\n");
                printf("1= Buscar objetos   2= Buscar agua   3= Buscar alimento   4=Descansar \n");
                scanf("%d", &opcion2);
                switch (opcion2)
                {
                case 1:
                    salud=salud-20;
                    sed=sed+20;
                    hambre=hambre+20;
                    printf("\n");
                    printf("Buscando objetos...\n");
                    printf("\n");
                    if (n==1)
                    {
                        printf(">>> Haz encontrado una botella vacia desea recogerla?\n");
                        scanf("%s", botella);
                        if ((strcmp(botella, rbotella1)==0) || (strcmp(botella, rbotella2)==0)) {
                            n2=n2+1;
                            printf(">> Ahora tienes una botella vacia\n");
                        } else {
                            printf(">> Tal vez hubiese servido para mas tarde...\n");
                        }
                    }
                    if (n==2)
                    {
                        printf(">>> Haz encontrado una daga desea recogerla?\n");
                        scanf("%s", daga);
                        if ((strcmp(daga, rdaga1)==0) || (strcmp(daga, rdaga2)==0)) {
                            n3=n3+1;
                            printf(">> Ahora tienes una daga... \n");
                        } else {
                            printf (">> Tal vez hubiese servido para mas tarde...\n");
                        }
                    }
                    if (n==3)
                    {
                       printf("\n");
                        printf(">>> Haz encontrado un puñal desea recogerlo?\n");
                        scanf("%s", daga);
                        if ((strcmp(daga, rdaga1)==0) || (strcmp(daga, rdaga2)==0)) {
                            n3=n3+1;
                            printf(">> Ahora tienes %d puñal... \n", n3);
                        } else {
                            printf (">> Tal vez hubiese servido para mas tarde...\n");
                        };
                    }
                    if (n==4)
                    {
                        printf(">>> Haz encontrado un termo desea recogerlo?\n");
                        scanf("%s", botella);
                        if ((strcmp(botella, rbotella1)==0) || (strcmp(botella, rbotella2)==0)) {
                            n2=n2+1;
                            printf(">> Ahora tienes una botella vacia\n");
                        } else {
                            printf (">> Tal vez hubiera servido para mas tarde...\n");
                        }
                    }
                    if (n==5)
                    {
                        printf("---> Haz encontrado el ANTIDOTO <--- \n");
                        printf(">>>  FELICIDADES haz ganado  <<< \n");
                        printf("\n");
                        salud=100;
                    }
                    break;
                case 2:
                    printf("\n");
                    printf("Buscando agua...\n");
                    printf("\n");
                    if (n==1)
                    {
                       printf (">>> En buenahora!\n");
                       printf (">>> Haz encontrado una reserva de agua en tubos de ensayo \n");
                        salud=salud-10;
                        sed=sed-20;
                        hambre=hambre+10;
                        printf("\n");
                        printf(">>> Haz encontrado unas pildoras desea tomarlas?\n");
                        scanf("%s", daga);
                        if ((strcmp(daga, rdaga1)==0) || (strcmp(daga, rdaga2)==0)) {
                            printf("\n");
                            printf(">> Las pildoras eran de Fentanilo, ahora sentira mareo \n");
                            printf(">> Hidratese y coma adecuadamente para volver a la normalidad \n");
                            hambre=hambre+20;
                            sed=sed+10;
                        } else {
                            printf("\n");
                            printf (">> Buena eleccion esas pildoras podian causarle mareo\n");
                            salud=salud+10;
                        }
                    }
                    if (n==2)
                    {
                       printf (">>> En la cocina hay un chorro de agua a presion\n");
                        if (n2>0)
                        {
                            printf(">> Tienes un envase, puedes conservarla y beberla");
                            salud=salud-10;
                            sed=sed-20;
                            hambre=hambre+10;
                        } else {
                            printf(">> Lastimosamente no tienes ningun envase para almacenarla\n");
                            salud=salud-10;
                            hambre=hambre+10;
                        }
                        printf("\n");
                        printf(">>> Haz encontrado un puñal desea recogerlo?\n");
                        scanf("%s", daga);
                        if ((strcmp(daga, rdaga1)==0) || (strcmp(daga, rdaga2)==0)) {
                            n3=n3+1;
                            printf(">> Ahora tienes %d puñal... \n", n3);
                        } else {
                            printf (">> Tal vez hubiese servido para mas tarde...\n");
                        }
                    }
                    if (n==3)
                    {
                       printf (">>> En buenahora!\n");
                       printf (">>> Haz encontrado un refrigerador con cubos de hielo \n");
                        salud=salud-10;
                        sed=sed-20;
                        hambre=hambre+10;
                        printf("\n");
                    }
                    if (n==4)
                    {
                         printf (">>> Encontraste una fuga de agua potable \n");
                        if (n2>0)
                        {
                            printf(">> Fabuloso! tienes un envase y puedes beberla\n ");
                            salud=salud-20;
                            sed=sed-20;
                            hambre=hambre+10;
                        } else {
                            printf(">> Lastimosamente no tienes ningun envase para almacenarla\n");
                            salud=salud-20;
                            hambre=hambre+10;
                        };
                    }
                    if (n==5)
                    {
                       printf (">>> Lo siento mucho... no hay nada por aqui...\n");
                    }
                    break;  
                case 3:
                    printf("\n");
                    printf("Buscando alimento...\n");
                    if (n==1)
                    {
                       printf (">>> Haz encontrado una lata de frejoles\n");
                       hambre=hambre-20;
                       salud=salud+20;
                    }
                    if (n==2)
                    {
                       printf (">>> Haz encontrado atun y una gaseosa\n");
                       hambre=hambre-20;
                       salud=salud+20;
                       sed=sed-20;
                    }
                    if (n==3)
                    {
                       printf (">>> Haz encontrado un pollo frito\n");
                       hambre=hambre-20;
                       printf("\n");
                       printf(">>> Haz encontrado unas pildoras desea tomarlas?\n");
                        scanf("%s", daga);
                        if ((strcmp(daga, rdaga1)==0) || (strcmp(daga, rdaga2)==0)) {
                            printf("\n");
                            printf(">> Ahora tienes +20 de salud!\n");
                            printf("\n");
                            salud=salud+20;
                        } else {
                            printf("\n");
                            printf (">> El pollo frito le hara daño a tu estomago\n");
                            salud=salud-20;
                        }
                    }
                    if (n==4)
                    {
                        printf("\n");
                        printf(">>> Encontraste papas crudas\n");
                        printf(">>> Si dices que si te quitara 20 de hambre pero te restara 10 la salud\n");
                        printf(">>> Estas son tus estadisticas\n");
                        printf("> SALUD=%d\n" , salud);
                        printf("> HAMBRE=%d\n" , hambre);
                        printf("> SED=%d\n" , sed);
                        printf(">>> Quieres comerlas?\n");
                        scanf("%s", daga);
                        if ((strcmp(daga, rdaga1)==0) || (strcmp(daga, rdaga2)==0)) {
                            salud=salud-10;
                            hambre=hambre-20;
                        } 
                    }
                    if (n==5)
                    {
                       printf (">>> Lo siento mucho... no hay nada por aqui...\n");
                    }
                    break;
                case 4:
                    salud=salud + 20;
                    sed=sed+20;
                    hambre=hambre+20;
                    printf("\n");
                    printf("Descansando...");
                    printf("\n");
                    break;
                    
                default:
                    printf("\n");
                    printf("Numero no valido\n");
                    n=n-1;
                    printf("\n");
                    break;
                }
                if (salud>100)
                {
                    salud=100;
                }
                 if (hambre<0)
                {
                    hambre=0;
                } if (sed<0)
                {
                    sed=0;
                }
                
                } while (n<=4 && salud>0 && hambre<100 && sed<100);
                if (salud<=0)
                {
                printf("\n");
                printf("Lastimosamente...\n");
                printf("Tu salud ha quedado en 0\n");
                printf("Estas muerto.\n");
                printf("\n");
                }
                if (hambre>=100)
                {
                printf("Lastimosamente...\n");
                printf("Tu hambre esta a mas del 100\n");
                printf("Haz muerto de hambre\n");
                printf("\n");
                }
                if (sed>=100)
                {
                printf("Lastimosamente...\n");
                printf("Haz muerto deshidratado\n");
                printf("\n");
                }
            } else {
                printf("\n");
                printf("Tal vez a la proxima...\n");
                printf("\n");
            }
            break;
        case 2:
            printf("\n");
            printf("CREDITOS:\n");
            printf("> Michelle Reyes\n");
            printf("\n");
                
            break;
        case 3:
            printf("\n");
            printf("SALIENDO...\n");
            printf("\n");
            break;  
        
        default:
            printf ("Numero no valido ingrese nuevamente\n");
            break;
        }
        n=0;
        salud=50;
        hambre=50;
        sed=50;
        n2=0;
        n3=0;
    } while (opcion1!=3);
    return 0;
}