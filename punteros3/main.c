#include <stdio.h>
#include <stdlib.h>

void mostrar1(int [], int );
void mostrar2(int [], int );
void mostrar3(int* ,int );



int main()
{
    int vec[5];
    int i;

   /* for(i=0;i<5;i++){
        printf("Ingrese: ");
        scanf("%d", (vec+i));


    }

     for(i=0;i<5;i++){
            printf("%d\n",*(vec+i));

     }*/

    // mostrar1(vec,5);
    // mostrar2(vec,5);
    mostrar4(vec,5);


    return 0;
}

void mostrar1(int vec[], int tam){
    int i;
     for(i=0;i<5;i++){
        printf("Ingrese: ");
        scanf("%d", &vec[i]);


    }

     for(i=0;i<5;i++){
            printf("%d\n",vec[i]);

     }


}

void mostrar2(int vec[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("Ingrese: ");
        scanf("%d",&vec[i]);
    }
    for(i=0; i<tam; i++)
    {
        printf("%d\n",*(vec+i));
    }

}

void mostrar3(int* vec,int tam){

    int i;
    for(i=0;i<tam;i++){
        printf("Ingrese: ");

        scanf("%d\n", (vec+i));

    }

     for(i=0;i<tam;i++){
            printf("%d\n",vec[i]);

     }


}

void mostrar4(int* vec, int tam){

int i;
for(i=0;i<5;i++){
        printf("Ingrese: ");
        scanf("%d", (vec+i));


    }

     for(i=0;i<5;i++){
            printf("%d\n",*(vec+i));

     }



}
