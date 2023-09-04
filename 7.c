//LIZETH BARRIOS RETANA 372813
//03-SEP-23
/*
 En la materia programación estructurada se aplican 5 exámenes, calcular el promedio final de la materia 
 donde la calificación menor de los exámenes se anula y el promedio se calcula en base a 4 exámenes.
 Desplegar el promedio final.
*/
//BRL_act4_7_932

#include<stdio.h>
int main()
{
    int cal1, cal2, cal3, cal4, cal5, menor, total, sbtotal;
    printf("--CALIFICACIONES DEL 1-100--\n");
    printf("ingrese la calificacion: \n");
    scanf("%d",&cal1);
    menor=cal1;
    printf("ingrese la calificacion: \n");
    scanf("%d",&cal2);
    printf("ingrese la calificacion: \n");
    scanf("%d",&cal3);
    printf("ingrese la calificacion: \n");
    scanf("%d",&cal4);
    printf("ingrese la calificacion: \n");
    scanf("%d",&cal5);
    if (cal2<menor)
    {
        menor=cal2;
    }
    if(cal3<menor)
    {
        menor=cal3;
    }
    if (cal4<menor)
    {
        menor=cal4;
    }
    if(cal5<menor)
    {
        menor=cal5;
    }
    sbtotal = ((cal1+cal2+cal3+cal4+cal5)-menor);
    total = sbtotal/4;
    printf("promedio: %d", total);
    return 0;
}