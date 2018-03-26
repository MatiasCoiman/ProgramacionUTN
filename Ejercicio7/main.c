#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int notas;
    float promedioNotas;
    int notaMasBaja;
    int acumuladorNotas=0;
    int edad;
    char sexo;
    int i=0;



    for(i=0;i<5;i++)
        {

              printf("Ingrese una nota: ");
              scanf("%d",&notas);
              printf("Ingrese una Edad: ");
              scanf("%d",&edad);
              printf("Ingrese sexo: ");
              fflush(stdin);
              scanf("%c",&sexo);
              sexo=tolower(sexo);


             while(notas<0 || notas>10)
                {
                    printf("Error, ingrese una nota valida: ");
                    scanf("%d",&notas);

                }

               while(edad<0 || edad>100)
                {
                    printf("Error, ingrese una edad valida: ");
                    scanf("%d",&edad);
                }
                while(sexo!='f' && sexo!='m')
                {
                    printf("Error , ingrese un sexo valido: ");
                    fflush(stdin);
                    scanf("%c ",&sexo);
                    sexo=tolower(sexo);
                }
                acumuladorNotas=acumuladorNotas+notas;


        }
              promedioNotas=(float)acumuladorNotas/5;
              printf("El promedio de las notas es : %.2f",promedioNotas);
    return 0;
}
