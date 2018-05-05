#include <stdio.h>
#include <stdlib.h>
#define TAMALUMNO 20
#define TAMMATERIA  20
#define TAMINSCRIPCION  20

typedef struct
{
    int legajo;
    char nombres[20];

} eAlumno;

typedef struct
{
    int codigo;
    char descripcion[20];
} eMateria;

typedef struct
{
    int legAlumno;
    int codMateria;

} eInscripcion;


void MostrarAlumnosConMaterias(eAlumno[], int, eInscripcion[], int eMateria[], int);


int main()
{
    eAlumno alumnos[] = {{1, "alma"}, {2, "Juan"}, {3, "pedro"}, {4, "luisa"}, {5, "raul"}};
    eMateria materias [] = {{1, "matematicas"}, {2, "ingles"},{3,"laboratorio"},{4,"sociales"}};
    eInscripcion inscripciones [] = {{1,1}, {1,2}, {2,4},{3,3},{3,4}, {4,3}, {4,1},{5,4}, {5,2}};

    MostrarAlumnoConMaterias(alumnos, 5, inscripciones, 9, materias, 4);

    return 0;
}



void MostrarAlumnoConMaterias(eAlumno alumno[], int tamAlum, eInscripcion inscripcion[], int tamInscrip,  eMateria materias[], int tamMateria)
{

    printf("\nalumnos    //     materias\n\n");

    for(int i = 0; i<tamAlum; i++)
    {
        printf("\n%s", alumno[i].nombres);


        for(int j=0; j<tamInscrip; j++)
        {
            if(alumno[i].legajo == inscripcion[j].legAlumno)
            {
                for(int k = 0; k<tamMateria; k++)
                {
                    if(inscripcion[j].codMateria== materias[k].codigo)
                    {
                        printf("\t\t%s\n",materias[k].descripcion);
                    }
                }

            }

        }

    }



}
