#include <stdio.h>
#include <stdlib.h>
#define CANT 3

int main()
{
    int vec[CANT],i;
    for(i=0;i<CANT;i++)
    {
       printf("ingrese:");
       scanf("\n%d",&vec[i]);
    }
    for(i=0;i<CANT;i++)
    {
        printf("\n%d",vec[i]);

    }
    return 0;
}
