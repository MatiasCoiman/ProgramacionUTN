#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int numero;
    int numero2;


    numero = 5;
    numero2 = 10;

    printf("La variable numero es : %d y la variable numero 2 es : %d",numero,numero2);
    */
    /*int numero;
    char letra;

    printf("Ingrese un numero y letra: ");
    scanf("%d %c" ,&numero,&letra);



    printf("El numero que ingreso y letra: %d %c ",numero,letra);*/

    int base;
    int altura;
    int perimetro;
    float superficie;

    printf("Ingrese una base: ");
    scanf("%d",&base);
    printf("Ingrese una altura : ");
    fflush(stdin);
    scanf("%d",&altura);

    perimetro = base*3;
    superficie =(float) base*altura/2;


    printf("El perimetro del triangulo es : %d \n",perimetro);
    printf("La superficie es : %.2f ",superficie);



    return 0;
}
