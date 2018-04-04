#include <stdio.h>
#include <stdlib.h>
#define CANT 5
int main()
{
     int leg[CANT];
     float sueldo[CANT];
     int edad[CANT];
     int i;

     for(i=0;i<CANT;i++)
    {
       leg[i]=i+1;
       printf("\nIngrese edad:");
       scanf("%d",&edad[i]);

       printf("\nIngrese sueldo:");
       scanf("%f",&sueldo[i]);

    }
    printf("\nLeg\tEdad\tSueldo");
    for(i=0;i<CANT;i++)
    {

        printf("\n%d\t%d\t%f",leg[i],edad[i],sueldo[i]);
    }


    return 0;
}
