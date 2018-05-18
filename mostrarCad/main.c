#include <stdio.h>
#include <stdlib.h>

void mostrarCadena(char* punteroCad);
int main()
{
    char cadena [] = {"hola"};

    mostrarCadena(cadena);

    return 0;
}

void mostrarCadena(char* punteroCad){
    while(*punteroCad != '\0'){
        printf("%c",*punteroCad);
        punteroCad++;
    }

}
