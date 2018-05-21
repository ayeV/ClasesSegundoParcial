#include <stdio.h>
#include <stdlib.h>
#define TAM 5
//pido mem para un vec de 5 entero
int main()
{
    int i;
    int* vec;
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


    free(vec);
    return 0;
}
