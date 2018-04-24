#include <stdio.h>
#include <stdlib.h>

#define TAM 50

typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    eFecha fechaIngreso;
    int isEmpty;
}eEmpleado;

int menu();
void inicializarEmpleados(eEmpleado vec[], int tam);




int main()

{
    int salir =0;
    eEmpleado gente [TAM];
    inicializarEmpleados(gente, TAM);

    do
    {
        switch(menu())
        {

        case 1:
            printf("alta\n\n");
            system("pause");
            break;
        case 2:
            printf("baja\n\n");
            system("pause");
            break;
        case 3:
            printf("modi\n\n");
            system("pause");
            break;
        case 4:
            printf("listar\n\n");
            system("pause");
            break;
        case 5:
            printf("ordenar\n\n");
            system("pause");
            break;
        case 6:
            salir = 1;
            break;
        default:
            printf("Numero ingresado incorrecto");

        }


    }
    while (salir!=1);

    return 0;
}


int menu()
{
    int opcion;

    printf("AMB Empleados\n\n\n");
    printf("Elija una opcion\n");
    printf("1- Alta\n");
    printf("2- baja\n");
    printf("3- modificacion\n");
    printf("4- listar\n");
    printf("5- ordenar\n");
    printf("6- salir\n");

    scanf("%d", &opcion);

    system("cls");

    return opcion;
}

void inicializarEmpleados(eEmpleado vec[], int tam)
{
    for(int i=0; i<tam; i++)
    {

        vec[i].isEmpty=1;

    }


}


int buscarLibre(eEmpleado vec[], int tam)
{
    int disponible= -1;

    for(int i=0; i<tam; i++)
    {
        if(vec[i].isEmpty== 1)
        {
            disponible = i;
            break;
        }
    }


    return disponible;
}

int buscarEmpleado(eEmpleados vec[], int tam, int legajo)
{

    int indice= -1;

    for(int i=0; i<tam;i++)
    {
        if(vec[i].isEmpty == 0 && vec[i].legajo == legajo)
        {
            indice = i;
            break;

        }

    }

    return indice;
}

void altaEmpleado(eEmpleado vec[], int tam)
{



}
