#include <stdio.h>
#include <stdlib.h>
#define CANT 5
#define ESC 27
int main()
{
    char nombre [CANT];

    char letra;

    do{
        system("cls");
        printf("Ingrese nombre: ");
        fflush(stdin);

        scanf("%[^\n]",nombre);

        printf("\nIngrese nombre: %s",nombre);

        printf("\n\nPresione cualquier tecla para continuar. Presione ESC 'escape' para salir");

        letra = getch();

    }while(letra != ESC);






    return 0;
}
