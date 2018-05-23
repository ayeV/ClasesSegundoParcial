#include <stdlib.h>
#include "Person.h"


Person* person_new (int age, int something)
{
    Person* this = malloc(sizeof(Person));
    if(this != NULL)
        initialize(this,age,something);

    return this;
}

/** \brief  Inicializa a una persona recibida como parametro
 * \param Person* this Puntero a la persona
 * \param int age Edad de la persona
 * \param int something Otros datos
 * \return void
 *
 */
static void initialize(Person* this, int age, int something)
{
    this->age = age;
    this->something = something;
}

/** \brief  Setea la edad de una persona recibida como parametro
 * \param Person* this Puntero a la persona
 * \param int age Edad de la persona
 * \return void
 *
 */
void person_setAge(Person* this, int age)
{
    if(age > 0)
        this->age = age;
}

void person_setAlgo(Person* this, int algo)
{
    if(algo > 0)
        this->something = algo;
}


/** \brief Obtiene la edad de una persona recibida como parametro
 * \param Person* this Puntero a la persona
 * \return int age Edad de la persona
 *
 */
int person_getAge(Person* this)
{
    return this->age;
}

int person_getAlgo(Person* this)
{
    return this->something;
}


/** \brief Libera el espacio ocupado por una persona recibida como parametro
 * \param Person* this Puntero a la persona
 * \return void
 *
 */
void person_free(Person * this) {
    // Do any other freeing required here.
    free(this);
}
