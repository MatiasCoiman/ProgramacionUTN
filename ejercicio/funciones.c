

void ordenar(int VEC[],int tam, int criterio)
{
    if(criterio==1)
    {
            int i,j, aux;
        for(i=0;i<tam-1;i++)
        {
            for(j=i+1;j<tam;j++)
            {
                if(VEC[i]>VEC[j])
                {
                aux=VEC[i];
                VEC[i]=VEC[j];
                VEC[j]=aux;
                }
            }
        }
    }else
        {
            if(criterio==0)
            {
                int i,j, aux;
            for(i=0;i<tam-1;i++)
                {
            for(j=i+1;j<tam;j++)
                    {
                if(VEC[i]<VEC[j])
                {
                aux=VEC[i];
                VEC[i]=VEC[j];
                VEC[j]=aux;
                }
                    }
                }
            }
             else
        {
          printf("error de criterio ");
        }

        }


}
void mostrarVector(int VEC [],int tam)
{


     for(int i=0; i<tam; i++)
    {
        printf("%d ", VEC[i]);
     }
printf("\n\n");

}
