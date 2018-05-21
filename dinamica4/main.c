#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int leg;
    char nombre[20];
    float sueldo;


}eEmpleado;

void mostrarEmpleado(eEmpleado*);
eEmpleado* newEmpleado();
eEmpleado* newEmpleadoParam(int , char* , float );


int main()
{
    eEmpleado* unEmpleado;

    unEmpleado = newEmpleadoParam(1234, "Jorge",4578);

    if(unEmpleado == NULL){
        printf("No se consiguio memoria\n");
        system("pause");
        exit(1);
    }
     mostrarEmpleado(unEmpleado);


    free(unEmpleado);
    return 0;
}

void mostrarEmpleado(eEmpleado* emp){

    printf("%d  %s  %.2f",emp->leg, emp->nombre, emp->sueldo);

}
eEmpleado* newEmpleado(){
    eEmpleado* p;

    p = (eEmpleado*)malloc(sizeof(eEmpleado));
    if(p !=  NULL){
        p->leg =0;
        strcpy(p->nombre, "");
        p->sueldo = 0;
    }

    return p;
}

eEmpleado* newEmpleadoParam(int leg, char* nombre, float sueldo){
    eEmpleado* p;

    p = (eEmpleado*)malloc(sizeof(eEmpleado));
    if(p !=  NULL){
        p->leg =leg;
        strcpy(p->nombre, nombre);
        p->sueldo = sueldo;
    }

    return p;
}

