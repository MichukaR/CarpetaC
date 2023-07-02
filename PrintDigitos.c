#include <stdio.h>
int main (void){
    int num1, num2, cociente,digitos, aux, aux2,digitos2, n=0, n2=0, dig1_1, dig2_1, dig1_2, dig2_2, dig3_2;
    int n11=0 ,n12=0 , n13=0;
    do
    {
        printf ("Ingrese el primer numero del 1 al 99\n");
        scanf("%d", &num1);
        if (num1<1 || num1 > 99){
            printf(">> Numero no valido ingrese de nuevo\n");
        }
    
    } while (num1<1 || num1 > 99);
    do
    {
        printf ("Ingrese el segundo numero del 100 al 999\n");
        scanf("%d", &num2);
        if (num2<100 || num2 > 999){
            printf(">> Numero no valido ingrese de nuevo\n");
        }
    } while (num2<100 || num2 > 999);

    aux = num1*10;
    aux2 = num2*10;
    printf ("Digitos primer numero\n");
    do {
    n+=1;
    aux = aux/ 10;
    digitos = aux % 10;
        if (digitos >0){
        printf("- %d\n", digitos );
        }
        if (n==1){
        dig1_1= digitos;}
        if (n==2){
        dig2_1= digitos;}
    } while (digitos>0);
    printf ("Digitos segundo numero\n");
    do {
    n2+=1;
    aux2 = aux2/ 10;
    digitos2 = aux2 % 10;
        if(digitos2>0)
        printf("- %d\n", digitos2 );
        if (n2==1){
        dig1_2= digitos2;
        }
        if (n2==2){
        dig2_2= digitos2;
        }
        if (n2==3){
        dig3_2= digitos2;
        }
    } while (digitos2>0);
    /*if (dig3_2==dig1_1 || dig3_2==dig2_1){
        n11+=1;}
    if (dig2_2==dig1_1 || dig2_2==dig2_1){
        n12+=1;}
    if (dig1_2==dig1_1 || dig1_2==dig2_1){
        n13+=1;} */
    if (dig1_1==dig1_2 || dig1_1==dig2_2 || dig1_1==dig3_2){
    n13+=1;}
    if (dig2_1==dig1_2 || dig2_1==dig2_2 || dig2_1==dig3_2){
    n11+=1;}

    printf ("El numero %d se repite %d veces\n", dig1_1, n11);
    printf ("El numero %d se repite %d veces\n", dig2_1, n13);
}
