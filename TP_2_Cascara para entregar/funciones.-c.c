#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define CANT 20

int altaElemento(EPersona lista[]){

    int i;


    for(i=0;i<CANT;i++){

        printf("Ingrese nombre: ");
        fflush(stdin);
        scanf("%[^\n]",lista[i].nombre);

        printf("Ingrese D.N.I: ");
        scanf("%d",lista[i].dni);

        printf("Ingrese edad: ");
        scanf("%d",lista[i].edad);

        break;
    }

}




int borrarElemento(EPersona lista[])
{

    EPersona aux;
    int i;


    printf("Ingrese su D.N.I: ");
    scanf("%d",&aux.dni);

    for(i=0; i<CANT; i++)
    {

        if(aux.dni == lista[i].dni)
        {

            lista[i].estado=0;
            printf("El Elemento fue ELIMINADO");
            break;
        }
        else
        {
            printf("No se encontro el D.N.I");
        }

    }





}
