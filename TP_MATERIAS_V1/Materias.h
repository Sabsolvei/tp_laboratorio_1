#ifndef MATERIAS_H_INCLUDED
#define MATERIAS_H_INCLUDED
typedef struct
{
    int id;
    //char* name;
    //char* career;
    char name [100];
    char career [100];
    int hours;
    int classes;
    int cuatrimestre;
    int correlativas;

}  Materias;

#endif //MATERIAS_H_INCLUDED


Materias* materias_new();
int materias_getStaticId();
int materias_append (Materias* this, char* name, char* career, int hours, int classes, int correlativas, int cuatrimestre);

int materias_setId(Materias* this, int id);
int materias_setName(Materias* this, char* name);
int materias_setCareer(Materias* this, char* career);
int materias_setHours(Materias* this, int hours);
int materias_setClasses(Materias* this, int classes);
int materias_setCorrelativas(Materias* this, int correlativas);
int materias_setCuatrimestre(Materias* this, int cuatrimestre);
