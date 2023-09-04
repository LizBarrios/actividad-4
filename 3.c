//LIZETH BARRIOS RETANA 372813
//03-SEP-23
//Programa en C que lea 6 números, desplegar el valor del número mayor.
//BRL_act4_3_932

#include <stdio.h>
int main ()
{
    float N1, N2, N3, N4, N5, N6, mayor;

    printf("ingrese el numero 1:\n");
    scanf("%f",&N1);
    mayor=N1;
    printf("ingrese el numero 2:\n");
    scanf("%f",&N2);
    printf("ingrese el numero 3:\n");
    scanf("%f",&N3);
    printf("ingrese el numero 4:\n");
    scanf("%f",&N4);
    printf("ingrese el numero 5:\n");
    scanf("%f",&N5);
    printf("ingrese el numero 6:\n");
    scanf("%f",&N6);
    if (N2>mayor)
    {
        mayor=N2;
    }
    if(N3>mayor)
    {
        mayor=N3;
    }
    if (N4>mayor)
    {
        mayor=N4;
    }
    if(N5>mayor)
    {
        mayor=N5;
    }
    if(N6>mayor)
    {
        mayor=N6;
    }
    printf("numero mayor es el: %.2f",mayor);
    return 0;
}