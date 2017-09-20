
#include "funciones.h"
#define CANT 20
int borrarElemento(EPersona lista[])
{

    EPersona aux;
    int i;
    long int dni2;


    printf("Ingrese su D.N.I: ");
    scanf("%d",&dni2);

    for(i=0; i<CANT; i++)
    {

        if(aux.dni == lista[i].dni2)
        {

            lista[i].estado=0;
            printf("El Elemento fue ELIMINADO");
            break;
        }
        else
        {
            printf("No se encontro el D.N.I")
        }

    }





}
