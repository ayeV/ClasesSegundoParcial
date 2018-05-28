#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{

    int leg;
    char nombre[20];
    float sueldo;
    int estado;

} eEmpleado;

eEmpleado* new_empleado();
eEmpleado* newEmpleadoParam(int, char*, float );
eEmpleado* newArrayEmpleados(int tam);
void guarda

void mostrarEmpleado(eEmpleado*);
void mostrarEmpleados(eEmpleado*,int);
void inicializarEmpleados(eEmpleado* emp,int tam);

int main()
{
    eEmpleado* personal;
    //unEmpleado = new_empleado();
   // otroEmpleado = newEmpleadoParam(1,"Juan",1500);

   personal = newArrayEmpleados(50);



    free(personal);
    return 0;
}

//consigue espacio en memoria para la struct e inicializa los campos de la struct

eEmpleado* new_empleado()
{

    eEmpleado* p;

    p = (eEmpleado*)malloc(sizeof(eEmpleado));
    if(p !=  NULL)
    {
        p->leg =0;
        strcpy(p->nombre, "");
        p->sueldo = 0;
        p->estado = 0;
    }

    return p;


}
//funcion que permite el hardcodeo de datos

eEmpleado* newEmpleadoParam(int leg, char* nombre, float sueldo)
{
    eEmpleado* p;
    p = new_empleado();


    if(p !=  NULL)
    {
        p->leg =leg;
        strcpy(p->nombre, nombre);
        p->sueldo = sueldo;
        p->estado = 1;
    }

    return p;
}
//m
void mostrarEmpleado(eEmpleado* emp)
{

    printf("Legajo\tnombre\tSueldo\n");
    if(emp != NULL)
    {
        printf("%d\t%s\t%.2f",emp->leg,emp->nombre,emp->sueldo);
    }
}

void mostrarEmpleados(eEmpleado* emp, int tam)
{
    int i;
    if(emp != NULL  && tam>0)
    {
        for(i=0; i<tam; i++)
        {
            if((emp+i)->estado == 1)
            {
                mostrarEmpleado(emp+i);
            }
        }
    }
}


void inicializarEmpleados(eEmpleado* emp,int tam)
{        int i;
        if(emp != NULL && tam>0)
        {
            for(i=0; i<tam; i++)
            {
                (emp+i)->estado = 0;
            }
        }

    }

//es como newEmpleado pero para array

eEmpleado* newArrayEmpleados(int tam)
{
    eEmpleado* array;
    array = (eEmpleado*)malloc(tam*sizeof(eEmpleado));
    if(array != NULL)
    {
        inicializarEmpleados(array,tam);
    }

    return array;

}
