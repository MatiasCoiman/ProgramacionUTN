//HARCODEO .
void hardCode(eSector vec[])
{
    vec[0].id=1;
    strcpy(vec[0].descripcion,"RRHH");
    vec[0].isEmpty=0;

    vec[1].id=2;
    strcpy(vec[1].descripcion,"sistema");
    vec[1].isEmpty=0;

    vec[2].id=3;
    strcpy(vec[2].descripcion,"administracion");
    vec[2].isEmpty=0;

    vec[3].id=4;
    strcpy(vec[3].descripcion,"compras");
    vec[3].isEmpty=0;

    vec[4].id=5;
   strcpy(vec[4].descripcion,"deposito");
    vec[4].isEmpty=0;
}

//VALIDACION DE NUMEROS.
int validarNumero(char msj[""])
{
    int validar;
    int numero;
    int i;
    long tam=256;
    char val, numeroCadena[tam];
    int tamCadena;
    printf("%s", msj);
    fflush(stdin);
    gets(numeroCadena);
    tamCadena=strlen(numeroCadena);
    for(i=0;i<tamCadena;i++)
    {
        if(!isdigit( numeroCadena[i]))
        {
            validar=1;
            break;
        }
    }
        while(validar==1)
        {
            printf("Error ,ingrese un numero : ");
            fflush(stdin);
            gets(numeroCadena);
            tamCadena=strlen(numeroCadena);
            for(i=0;i<tamCadena;i++)
            {
               if(!isdigit( numeroCadena[i]))
                {
                    validar=1;
                    break;
                }else
                {
                    validar=0;
                }
            }
        }
     numero=atoi(numeroCadena);
  return numero;
}
//VALIDACION DE LETRAS.
int validarLetra(char tal[])
    {
        int i;
        int fin=1;

        for(i=0;i<strlen(tal);i++)
        {
            if(!(isalpha(tal[i])))
            {
                    fin =0;
                    printf("Error, ingrese solo letras");
                    break;
            }
        }
        return fin;
    }
//INICIALIZACION.
void inicializarEmpleados(eEmpleado vec[], int tam)
{
    int i;

    for(i=0; i< tam; i++)
    {
        vec[i].estado =1;
    }
}

//MOSTRAR.

 void mostrarEmpleados(eEmpleado vec[], int tam)
{
    int i;

    system("cls");
    printf("---Lista de Empleados---\n\n");
    printf("  Legajo  Nombre   Sexo   Sueldo   Fecha de Ingreso \n\n");
    for(i=0; i< tam; i++)
    {
        if(vec[i].estado == 0)
        {
            mostrarEmpleado(vec[i]);
        }
    }
}

//MOSTRAR.
void mostrarEmpleado(eEmpleado emp)
{
    printf("  %4d     %s     %c  %10.2f    %02d/%02d/%4d \n", emp.legajo, emp.nombre, emp.sexo, emp.sueldo, emp.fechaIngreso.dia, emp.fechaIngreso.mes, emp.fechaIngreso.anio );
}

//BUSCAR LIBRE.
int buscarLibre(eEmpleado vec[], int tam)
{
    int indice = -1;
    int i;

    for(i=0; i < tam; i++)
    {
        if(vec[i].estado == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}
//BUSCAR ESPECIFICO
int buscarEmpleado(eEmpleado vec[], int tam, int legajo)
{
    int indice = -1;
    int i;

    for(i=0; i < tam; i++)
    {
        if(vec[i].isEmpty == 0 && vec[i].legajo == legajo)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

//ALTA.

void altaEmpleado(eEmpleado vec[], int tam)
{

    eEmpleado nuevoEmpleado;
    int indice;
    int esta;
    int legajo;

    system("cls");
    printf("---Alta empleado---\n\n");

    indice = buscarLibre(vec, tam);

    if(indice == -1)
    {
        printf("\nEl sistema esta completo. No se puede dar de alta a empleados nuevos.\n\n");
    }
    else
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        esta = buscarEmpleado(vec, tam, legajo);

        if(esta != -1)
        {
            printf("\nEl legajo %d ya esta dado de alta en el sistema\n", legajo);
                   mostrarEmpleado(vec[esta]);
        }
        else{
                   nuevoEmpleado.estado = 0;
                   nuevoEmpleado.legajo = legajo;

                   printf("Ingrese nombre: ");
                   fflush(stdin);
                   gets(nuevoEmpleado.nombre);

                   printf("Ingrese sexo: ");
                   fflush(stdin);
                   scanf("%c", &nuevoEmpleado.sexo);

                   printf("Ingrese sueldo: ");
                   scanf("%f", &nuevoEmpleado.sueldo);

                   printf("Ingrese fecha de ingreso d m a: ");
                   scanf("%d %d %d", &nuevoEmpleado.fechaIngreso.dia, &nuevoEmpleado.fechaIngreso.mes, &nuevoEmpleado.fechaIngreso.anio);

                   vec[indice] = nuevoEmpleado;

                   printf("\nAlta exitosa!!!\n\n");

           }
  }

}
//BAJA.

void bajaEmpleado(eEmpleado vec[], int tam){
int legajo;
int esta;
char confirma;

system("cls");
printf("---Baja Empleado---\n\n");

   printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        esta = buscarEmpleado(vec, tam, legajo);

        if(esta == -1)
        {
            printf("\nEl legajo %d no se encuentra en el sistema\n\n", legajo);

        }
        else{

                mostrarEmpleado(vec[esta]);

        do{
            printf("\nConfirma baja? [s|n]: ");
            fflush(stdin);
            scanf("%c", &confirma);
            confirma = tolower(confirma);
        }while(confirma != 's' && confirma != 'n');

        if(confirma == 's'){
            vec[esta].isEmpty = 1;
            printf("\nSe ha realizado la baja\n\n");
        }
        else{
            printf("\nSe ha cancelado la baja\n\n");
        }

        }
}
//VALIDACION NUMERO FLOTNATE
float validarNumeroFlotante(char mensaje[])
{

    int validar;
    float numero;
    int i;
    long tam=256;
    char val, numeroCadena[tam];
    int tamCadena;
    printf("%s", mensaje);
    fflush(stdin);
    gets(numeroCadena);
    tamCadena=strlen(numeroCadena);
    for(i=0;i<tamCadena;i++)
    {
        if(isalpha( numeroCadena[i]))
        {
            validar=1;
            break;
        }
    }
        while(validar==1)
        {
            printf("Error ,ingrese un numero : ");
            fflush(stdin);
            gets(numeroCadena);
            tamCadena=strlen(numeroCadena);
            for(i=0;i<tamCadena;i++)
            {
               if(isalpha( numeroCadena[i]))
                {
                    validar=1;
                    break;
                }else
                {
                    validar=0;
                }
            }
        }
     numero=atof(numeroCadena);
  return numero;
}
