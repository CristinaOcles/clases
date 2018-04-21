#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    char nombre [20];
    char sexo;
    float sueldo;


} eEmpleado;

void mostrarEmpleado();
eEmpleado conseguirEmpleado();



int main()
{
   // eEmpleado unEmpleado = {1234, "Pedro", 'm', 20000.30};
  //  eEmpleado otroEmpleado;
//    eEmpleado empleadoTres;

    eEmpleado plantel[3];

    for(int i=0; i<3; i++)
    {
        plantel[i] = conseguirEmpleado();
    }
    for(int i=0; i<3; i++)
    {
        mostrarEmpleado(plantel[i]);
    }

   /* otroEmpleado = unEmpleado;

    mostrarEmpleado(unEmpleado);
    mostrarEmpleado(otroEmpleado);

    empleadoTres = conseguirEmpleado();
    mostrarEmpleado(empleadoTres);
*/


    return 0;
}


void mostrarEmpleado(eEmpleado emp)
{
    printf("\nlegajo: %d\n", emp.legajo);
    printf("nombre: %s\n", emp.nombre);
    printf("sexo: %c\n", emp.sexo);
    printf("sueldo: %.2f\n\n", emp.sueldo);

}

eEmpleado conseguirEmpleado()
{
    eEmpleado emp;

    printf("\nIngrese legajo: \n");
    fflush(stdin);
    scanf("%d", &emp.legajo);

    printf("Ingrese nombre: \n");
    fflush(stdin);
    gets(emp.nombre);

    printf("Ingrese sexo: \n");
    fflush(stdin);
    scanf("%c", &emp.sexo);

    printf("Ingrese sueldo: \n");
    scanf("%2f", &emp.sueldo);

    return emp;


}


