//LIZETH BARRIOS RETANA 372813
//03-SEP-23
/*
 Programa en C que sirva para el juego del CHINCHAMPU (Piedra, Papel, Tijera) para 1 jugador y la computadora, 
 (usar selección múltiple).
*/
//BRL_act4_9_932

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int num;
    printf("ingrese el numero de lo deseas: \n");
    printf("1. piedra\n");
    printf("2. papel\n");
    printf("3. tijera\n");
    scanf("%d",&num);
    int Aleatorio = rand() % 3 + 1;
    switch (num)
    {
    case 1://piedra
        
        if(Aleatorio == 1)//piedra
        {
            printf("el numero aleatorio es: %d\n",Aleatorio);
            printf("empataste");
        }
        else
        {
            if(Aleatorio == 2)//papel
            {
                printf("el numero aleatorio es: %d\n",Aleatorio);
                printf("perdiste");
            }
            else //tijera
            {
                printf("el numero aleatorio es: %d\n",Aleatorio);
                printf("ganaste");
            }
        }

        break;
    case 2://papel

        if(Aleatorio == 1)//piedra
        {
            printf("el numero aleatorio es: %d\n",Aleatorio);
            printf("ganaste");
        }
        else
        {
            if(Aleatorio == 2)//papel
            {
                printf("el numero aleatorio es: %d\n",Aleatorio);
                printf("empataste");
            }
            else //tijera
            {
                printf("el numero aleatorio es: %d\n",Aleatorio);
                printf("perdiste");
            }
        }
        break;
    case 3://tijera

        if(Aleatorio == 1)//piedra
        {
            printf("el numero aleatorio es: %d\n",Aleatorio);
            printf("perdiste");
        }
        else
        {
            if(Aleatorio == 2)//papel
            {
                printf("el numero aleatorio es: %d\n",Aleatorio);
                printf("ganaste");
            }
            else //tijera
            {
                printf("el numero aleatorio es: %d\n",Aleatorio);
                printf("empataste");
            }
        }
        break;
    default:
        printf("numero no valido");
        break;
    }
        return 0;
    }