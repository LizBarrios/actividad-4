//LIZETH BARRIOS RETANA 372813
//02-SEP-23
/*
 Programa que sirva para calcular el Total a pagar por consumo de agua, donde el dato 
 de entrada son los M3 de agua consumidos, Tomar en cuenta que se cobra escalonada de la Siguiente manera:

    Rango1: 0 al 4 M3 $50 x facturación sin importar cuánto consumió en este rango
    Rango2: 5 a 15 M3 $8.00 x M3
    Rango3: 16 a 50 M3 $10.00 x M3
    Rango4: 51 M3 en adelante $11.00 x M3

 Nota: Desplegar SubTotal, Iva(16%), y Total a pagar.
*/
//BRL_act4_6_932 

#include<stdio.h>
#define iva 0.16
int main ()
{
    int m3, st;
    float i, total;
    printf("ingrese los metros cubicos consumidos:\n");
    scanf("%d",&m3);
    if (m3<=4)
    {
        st=50;
    }
    else 
    {
        if (m3>=5 && m3<=15)
        {
           st=(50+((m3-4)*8));
        }
        else
        {
            if (m3>=16 && m3<=50)
            {
                st=(138+((m3-15)*10));
            }
            else
            {
                if(m3>=51)
                {
                    st=(488+((m3-50)*11));
                }
            }
            
        }
    }
    printf("subtotal: %d\n", st );
    printf("iva del 16%: %.2f \n", i = iva * st );
    printf("total: %.2f\n", total = st + i );
    return 0;
}