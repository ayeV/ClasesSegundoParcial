#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[51];
    int edad;
} ePersona;

int main()
{
    int i;
    ePersona pers[3];
    ePersona *ptrPers;
    ptrPers = pers;

   /* for(i=0; i<3; i++)
    {
        printf("nombre: ");
        fflush(stdin);
        scanf("%s",pers[i].nombre);
        printf("edad; ");
        scanf("%d",&pers[i].edad);

    }
    for(i=0; i<3; i++)
    {
        printf("%s\t\t%d\n",pers[i].nombre,pers[i].edad);
    }*/
    //uso punteros con operador flecha

    for(i=0; i<3; i++)
    {
        printf("nombre: ");
        fflush(stdin);
        scanf("%s",(ptrPers+i)->nombre);
        printf("edad; ");
        scanf("%d",&(ptrPers+i)->edad);
    }
    for(i=0; i<3; i++)
    {
        printf("%s\t\t%d\n",(ptrPers+i)->nombre,(ptrPers+i)->edad);
    }
    //uso punteros con asterisco
    for(i=0; i<3; i++)
    {
        printf("nombre: ");
        fflush(stdin);
        scanf("%s",(*(ptrPers+i)).nombre);
        printf("edad; ");
        scanf("%d",&(*(ptrPers+i)).edad);
    }
    for(i=0; i<3; i++)
    {
        printf("%s\t\t%d\n",(*(ptrPers+i)).nombre,(*(ptrPers+i)).edad);
    }
    return 0;
}
