#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main()
{
    int i;
    float* vec;
    vec = (float*) calloc(TAM,sizeof(float));//hace lo mismo que malloc pero lo incializa en 0
    if(vec == NULL){
        printf("\nNo se pudo conseguir memoria\n");
        system("pause");
        exit(1);
    }
    for(i=0;i<TAM;i++){
        printf("Ingrese nro: ");
        scanf("%f",vec+i);//scanf recibe dir de memoria
    }

 for(i=0;i<TAM;i++){
        printf("%.2f\n",*(vec+i)); //printf recibe valores

    }


    free(vec);
    return 0;

}
