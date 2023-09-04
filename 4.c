//LIZETH BARRIOS RETANA 372813
//03-SEP-23
/*
 Programa en C que sirva para calcular el salario semanal de un trabajador donde se obtiene como dato 
 de entrada las horas semanales trabajadas, el salario por hora.
 El programa deberá calcular el salario normal, salario extra y salario total, considerando lo siguiente:
    - Jornada Normal de 40 horas.
    -El salario normal se considera las horas trabajadas menores o igual a la jornada normal
    -Salario extra se considera las horas trabajadas mayores a la jornada normal y se pagan dobles las primeras 9 
    y triples a partir de la décima hora extra.
 Nota: Desplegar todos los datos (Salario x hora, Horas Trabajadas, Salario normal, Salario extra y Salario Total)
*/
//BRL_act4_4_932

#include<stdio.h>
#define NORMAL 40
int main()
{
    int horas;
    float salario, extra, total, sal_normal;
    printf("horas semanales trabajadas: \n");
    scanf("%d",&horas);
    printf("salario por hora: \n");
    scanf("%f",&salario);
    if(horas<=NORMAL)
    {
        sal_normal = salario * horas;
        total = sal_normal;
    }
    else
    {
        if (horas <= 49)
        {
            sal_normal= NORMAL * salario;
            extra = ((horas - NORMAL) * (salario * 2));
            total = sal_normal + extra;
        }
        else
        {
            if (horas > 49)
            {
                sal_normal= NORMAL * salario;
                extra = (18 * salario) + ((horas - NORMAL - 9 ) * (salario * 3));
                total = sal_normal + extra;
            }
        }
    }
    printf("salario por hora: %.2f \n",salario);
    printf("horas trabajadas: %d \n",horas);
    printf("salario normal: %.2f\n",sal_normal);
    printf("salario extra: %.2f\n",extra);
    printf("salario total: %.2f\n",total);
    return 0;
}