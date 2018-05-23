#include <stdio.h>
#include <stdlib.h>
#include "Person.h"


int main()
{
    Person* personArray[10];
    int i;
    for(i = 0; i < 10; i++)
    {
        personArray[i] = person_new(i,i);
    }
    for(i = 0; i < 10; i++)

    {
        printf("Edad: ");
        scanf("%d",&(*(personArray+i))->age);
        person_setAge(personArray[i],i-4);
        printf("Algo: ");
        scanf("%d",&(*(personArray+i))->something);
        person_setAlgo(personArray[i],i-4);
    }
    for(i = 0; i < 10; i++)
    {
        printf("\nAge: %2d",person_getAge(personArray[i]));
        printf("\nAlgo: %2d",person_getAlgo(personArray[i]));
    }
    scanf(" ");


    free(*personArray);
    return 0;
}

