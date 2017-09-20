#include <stdio.h>
#include <stdlib.h>
#define CANT 31


struct alumno
{
    int legajo;
    char nombre[CANT];
    int notaA;
    int notaB;
    float promedio;


};
int main()
{
    struct alumno alu;

    printf("Ingrese legajo: ");
    scanf("%d",&alu.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin); // o usar tambien ► setbuf(stdin,NULL);
    gets(alu.nombre);


    printf("Nota A: ");
    scanf("%d",&alu.notaA);


    printf("Nota B: ");
    scanf("%d",&alu.notaB);

    system("cls");

    alu.promedio = (float)(alu.notaA + alu.notaB) / 2;

    printf("El promedio es : %.2f ",alu.promedio);




    return 0;
}
