//LIZETH BARRIOS RETANA 372813
//29-AGO-23     03-SEP-23
/*
 Programa en C que use un menú para realizar las 4 operaciones básicas, donde el usuario 
 introduce 2 números enteros y realizará la operación según sea su selección del menú.
    MENÚ
        1.- Suma
        2.- Resta
        3.- Multiplicación
        4.-División
*/
//BRL_act4_1_932

#include <stdio.h>
int main ()
{
    int num1, num2, opcion;
    float res;
    printf("ingrese el numero 1: ");
    scanf("%d",&num1);
    printf("ingrese el numero 2: ");
    scanf("%d",&num2);
    printf("ingrese la operacion que desee realizar\n");
    printf("1.suma\n");
    printf("2.reta\n");
    printf("3.multiplicion\n");
    printf("4.division\n");
    scanf("%d",&opcion);
    
    if (opcion==1)
    {
        res=num1+num2;
    }
    else
    {
        if (opcion==2)
        {
            res=num1-num2;
        }
        else
        {
            if (opcion==3)
            {
                res=num1*num2;
            }
            else
            {
                if (opcion==4)
                {
                    if (num2 != 0) 
                    {
                        res = num1 / num2; 
                    }
                    else
                    {
                        printf("No se puede dividir por cero");
                    }
                }
            }
        }
    }
    printf("resultado: %.2f",res);
    return 0;
}