#include <stdio.h>
#include <stdlib.h>
typedef struct{

    int numero_de_legajo;
    char nombre_de_legajo[50];
    int primera_nota;
    int segunda_nota;
    float promedio;
    int estado;

}Alumno;
int main()
{
    Alumno estructuras_alumno[5];
    printf("Hello world!\n");
    return 0;
}
