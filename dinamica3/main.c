#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main()
{    int i;
    int* vec;
    int* aux;
    vec = (int*) malloc(TAM*sizeof(int));
    if(vec == NULL){
        printf("\nNo se pudo conseguir memoria\n");
        system("pause");
        exit(1);
    }
    for(i=0;i<TAM;i++){
        printf("Ingrese nro: ");
        scanf("%d",vec+i);//scanf recibe dir de memoria
    }

 for(i=0;i<TAM;i++){
        printf("%d\n",*(vec+i)); //printf recibe valores

    }
    //si quisiera agrandar el vector:

    aux = (int*)realloc(vec,(TAM+5)*sizeof(int));
    if(aux== NULL){
        printf("No se pudo conseguir memoria \n");
        system("pause");
        exit(1);
    }
    else{
        vec = aux;
        for(i=5;i<TAM+5;i++){
        printf("Ingrese nro: ");
        scanf("%d",vec+i);
    }
    }

 for(i=0;i<TAM+5;i++){
        printf("%d\n",*(vec+i));
    }


    free(vec);

    return 0;
}
