//LIZETH BARRIOS RETANA 372813
//29-AGO-23     03-SEP-23
/*
 Programa en C que use un menú para realizar conversiones de unidades de medida, donde 
 el usuario selecciona una opción y realizará la opción según sea su selección del menú.
    MENÚ
        1.- cm a pulgadas
        2.- cm a pies
        3.- Km a millas
        4.- Pulgadas a cm
        5.- pies a cm
        6.- millas a Km
*/
//BRL_act4_2_932

#include <stdio.h>
#define Cm_pulgada 0.393701
#define Cm_pies 0.0328084
#define Km_milla 0.621371
#define Pul_cm 2.54
#define Pie_cm 30.48
#define Milla_km 1.60934

int main ()
{
    int num, opcion;
    float res;
    printf("ingrese el numero que desea convertir: ");
    scanf("%d",&num);
    printf("ingrese el numero de la conversion que desea realizar\n");
    printf("1.cm a pulgadas\n");
    printf("2.cm a pies\n");
    printf("3.km a millas\n");
    printf("4.pulgadas a cm\n");
    printf("5.pies a cm\n");
    printf("6.millas a km\n");

    scanf("%d",&opcion);
    
    if (opcion==1)
    {
        res=num * Cm_pulgada;
    }
    else
    {
        if (opcion==2)
        {
            res=num * Cm_pies;
        }
        else
        {
            if (opcion==3)
            {
                res=num * Km_milla;
            }
            else
            {
                if (opcion==4)
                {
                    res=num * Pul_cm;
                }
                else
                {
                    if (opcion==5)
                    {
                        res=num * Pie_cm;
                    }
                    else
                    {
                        if (opcion==6)
                        {
                            res=num * Milla_km;
                        }
                    }
                }
            }
        }
    }
    printf("resultado: %.2f",res);
    return 0;
}