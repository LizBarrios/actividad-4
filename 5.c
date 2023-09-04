//LIZETH BARRIOS RETANA 372813
//03-SEP-23
/*
 Programa en C que sirva para desplegar el Total de una llamada telefónica donde se pide como datos de entrada 
 los minutos y el tipo de llamada, se cobra de la siguiente manera:
    -MENÚ
        1.- Llamada Local $3.00 sin límite de tiempo
        2.- Llamada Nacional $7.00 por los 3 primeros minutos y $2.00 minuto adicional
        3.- Llamada Internacional $9.00 por los 2 primeros minutos y $4.00 minuto adicional
        Desplegar, Subtotal,Iva (16%) y Total.
*/
//BRL_act4_5_932

#include <stdio.h>
#define IVA 0.16
int main ()
{
    int minutos, tipo, subtotal;
    float iva, total;
    printf("De cuantos minutos va a ser la llamada? \n");
    scanf("%d", &minutos);
    printf("ingrese el numero del tipo de llamada que va a realizar: \n");
    printf("1. Llamada Local \n");
    printf("2. Llamada Nacional \n");
    printf("3. Llamada Internacional\n");
    scanf("%d", &tipo);
    
    if (tipo == 1)
    {
        subtotal = minutos * 3;
        iva = subtotal * IVA;
        total = subtotal + iva;
    }
    else
    {
        if (tipo == 2 )
        {
            if (minutos <= 3)
            {
                subtotal = minutos * 7;
                iva = subtotal * IVA;
                total = subtotal + iva;
            }
            else 
            {
                subtotal = 21 + ((minutos - 3) * 2);
                iva = subtotal * IVA;
                total = subtotal + iva;
            }
        }
        else
        {
            if (tipo == 3 )
            {
                if (minutos <= 2)
                {
                    subtotal = minutos * 9;
                    iva = subtotal * IVA;
                    total = subtotal + iva;
                }
                else 
                {
                    subtotal = 18 + ((minutos - 2) * 4);
                    iva = subtotal * IVA;
                    total = subtotal + iva;
                }
            }
        }
    }
    printf("subtotal: %d \n", subtotal);
    printf("Iva: %.2f \n", iva);
    printf("total: %.2f \n", total);
    return 0;
}