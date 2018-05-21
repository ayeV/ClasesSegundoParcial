#include <stdio.h>
#include <stdlib.h>
//pido mem dinamica para una sola cosa
int main()
{
    int* pNum;

    pNum = (int*)malloc(sizeof(int));
    if(pNum == NULL){
        printf("No se pudo conseguir memoria. El prog finaliza\n\n");
        system("pause");
        exit(1); //con la func exit se termina el programa
    }
    printf("Ingrese un nro: ");
    scanf("%d",pNum);

    printf("%d\n",*pNum);


    free(pNum); //libero memoria
    return 0;
}
