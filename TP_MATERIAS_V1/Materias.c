#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Materias.h"
#include "ArrayList.h"
#include "Controller.h"

static int id = 0;

int materias_append (Materias* this, char* name, char* career, int hours, int classes, int correlativas, int cuatrimestre)
{
    int retorno = -1;

    if(this != NULL)
    {
        materias_setName(this, name);
        materias_setCareer(this, career);
        materias_setHours(this, hours);
        materias_setClasses(this, classes);
        materias_setCorrelativas(this, correlativas);
        materias_setCuatrimestre(this, cuatrimestre);

        retorno = 0;
    }
    return retorno;
}

int materias_getStaticId()
{
    id++;
    return id;
}

Materias* materias_new()
{
    Materias* returnAux = NULL;
    returnAux = (Materias*)malloc(sizeof(Materias));
    return returnAux;
}

int materias_setId(Materias* this, int id)
{
    int retorno = -1;
    if(this != NULL && id > 0)
    {
        this->id = id;
        retorno = 0;
    }
    return retorno;
}

int materias_setHours(Materias* this, int hours)
{
    int retorno = -1;
    if(this != NULL && hours > 0)
    {
        this->hours = hours;
        retorno = 0;
    }
    return retorno;
}

int materias_setClasses(Materias* this, int classes)
{
    int retorno = -1;
    if(this != NULL && classes > 0)
    {
        this->classes = classes;
        retorno = 0;
    }
    return retorno;
}

int materias_setCorrelativas(Materias* this, int correlativas)
{
    int retorno = -1;
    if(this != NULL && correlativas > 0)
    {
        this->correlativas = correlativas;
        retorno = 0;
    }
    return retorno;
}

int materias_setCuatrimestre(Materias* this, int cuatrimestre)
{
    int retorno = -1;
    if(this != NULL && cuatrimestre > 0)
    {
        this->cuatrimestre = cuatrimestre;
        retorno = 0;
    }
    return retorno;
}

int materias_setName(Materias* this, char* name)
{
    int retorno = -1;
    if(this != NULL && strlen(name) > 0)
    {
        strcpy(this->name, name);
        //this->name = name;
        retorno = 0;
    }
    return retorno;
}

int materias_setCareer(Materias* this, char* career)
{
    int retorno = -1;
    if(this != NULL && strlen(career) > 0)
    {
        strcpy(this->career, career);
        retorno = 0;
    }
    return retorno;
}

