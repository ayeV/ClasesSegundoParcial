#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 3
#include <string.h>

struct alumno {
char nombre[20];
int edad;
};
int main()
{

    struct alumno auxiliarAlumno;
    struct alumno *punteroAlumno;
    punteroAlumno = &auxiliarAlumno;

    //hardcodeo y lo muestro
    strcpy(punteroAlumno->nombre, "Ernesto");
    punteroAlumno->edad = 10;


    printf("%s\t\t%d\n",punteroAlumno->nombre,punteroAlumno->edad);
    //uso operador asterisco y punto
    printf("Nombre: ");
    fflush(stdin);
    scanf("%[^\n]",(*punteroAlumno).nombre);
    printf("edad: ");
    scanf("%d",&(*punteroAlumno).edad);

     printf("%s\t\t%d\n",(*punteroAlumno).nombre,(*punteroAlumno).edad);
    //uso operador flecha
     printf("nombre: ");
     fflush(stdin);
     scanf("%[^\n]",punteroAlumno->nombre);
     printf("edad: ");
     scanf("%d",&punteroAlumno->edad);
     printf("%s\t\t%d\n",punteroAlumno->nombre,punteroAlumno->edad);



    return 0;
}
