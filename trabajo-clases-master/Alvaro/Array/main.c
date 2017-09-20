#include <stdio.h>
#include <stdlib.h>

#define CANT 2
int main()
{
    int i;

    // int edad1;
    // int edad2;
    float salario[CANT];
    int edad[CANT];
    int legajo[CANT];

    for(i=0; i<CANT; i++)
    {

        printf("Edad %d: ",i+1);
        scanf("%d",&edad[i]);

        printf("Salario %d: ",i+1);
        scanf("%f",&salario[i]);

        printf("Legajo %d:",i+1);
        scanf("%d",&legajo[i]);
    }



    for(i=0; i<CANT; i++)
    {
        printf("\n...........................\n");
        printf("\nLas edad es: %d\n",edad[i]);

        printf("\nLos salario es: %.2f\n",salario[i]);

        printf("\nEl numero de legajo es: %d\n",legajo[i]);
        printf("...........................");
    }


    return 0;
}
