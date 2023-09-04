//LIZETH BARRIOS RETANA 372813
//03-SEP-23
/*
 Programa en C que sirva para el juego del CHINCHAMPU (Piedra, Papel, Tijera) para 1 jugador y la computadora, 
 (usar condición anidada).
*/
//BRL_act4_8_932

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num,dado;
    printf("ingrese el numero de lo deseas: \n");
    printf("1. piedra\n");
    printf("2. papel\n");
    printf("3. tijera\n");
    scanf("%d",&num);
    srand(time(NULL));
    int Aleatorio = rand() % 3 + 1;
    if(Aleatorio == 1)// piedra
    {
        if(num == 1)//piedra
        {
            printf("el numero aleatorio es: %d\n",Aleatorio);
            printf("empataste");
        }
        else
        {
            if(num == 2)//papel
            {
                printf("el numero aleatorio es: %d\n",Aleatorio);
                printf("ganaste");
            }
            else //tijera
            {
                printf("el numero aleatorio es: %d\n",Aleatorio);
                printf("perdiste");
            }
        }
    }
    if(Aleatorio == 2)// papel
    {
        if(num == 1)//piedra
        {
            printf("el numero aleatorio es: %d\n",Aleatorio);
            printf("perdiste");
        }
        else
        {
            if(num == 2)//papel
            {
                printf("el numero aleatorio es: %d\n",Aleatorio);
                printf("empataste");
            }
            else //tijera
            {
                printf("el numero aleatorio es: %d\n",Aleatorio);
                printf("ganaste");
            }
        }
    }
    if(Aleatorio == 3)// tijera
    {
        if(num == 1)//piedra
        {
            printf("el numero aleatorio es: %d\n",Aleatorio);
            printf("ganaste");
        }
        else
        {
            if(num == 2)//papel
            {
                printf("el numero aleatorio es: %d\n",Aleatorio);
                printf("perdiste");
            }
            else //tijera
            {
                printf("el numero aleatorio es: %d\n",Aleatorio);
                printf("empataste");
            }
        }
    }
    return 0;
}