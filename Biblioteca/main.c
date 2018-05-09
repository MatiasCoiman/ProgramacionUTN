#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BibliotecaUtn.h"


int main()
{

    float f;
    f=validarNumeroFlotante("ingrese un numero flotante: ");
    printf("%.2f", f);
    //LLAMADA EN EL MAIN
    //nuevaPersona.edad=validarNumero("ingrese una edad: ");
    return 0;
}


