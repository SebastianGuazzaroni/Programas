/*12- Se tiene como información la cantidad de materias adeudadas de los alumnos de dos
clases. Se pide ingresar en un vector las materias adeudadas de M (<10) alumnos de
la sala A y en otro los N (N<15) de la sala B. Generar e imprimir:
a) La unión de ambas clases en un nuevo vector C.
b) Un nuevo vector D resultante todos los alumnos que deben materias. Aquellos
elementos distintos de cero de A y B. */

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int m, n;

    printf("Ingresar los alumnos de la sala A (M < 10): ");
    scanf("%d", &m);
    
    while(m < 0 || m >= 10)
    {
        printf("la opcion ingresada es incorrecta. vuelva a intentarlo: ");
        scanf("%d", &m);    
    }

    printf("Ingresar los alumnos de la sala A (M < 15): ");
    scanf("%d", &n);

    while(n < 0 || n >= 15)
    {
        printf("la opcion ingresada es incorrecta. vuelva a intentarlo: ");
        scanf("%d", &n);    
    }

    int salaA[m];
    int salaB[n];

    for(int i = 0; i < m; i++)
    {
        printf("Ingrese las materias adeudadas del alumno %d: ", i+1);
        scanf("%d", &salaA[i]);
    }

    for(int j = 0; j < n; j++)
    {
        printf("Ingrese las materias adeudas del alumno %d: ", j+1);
        scanf("%d", &salaB[j]);
    }

    int g;
    g = m + n;
    int unionAyB[g];

    for(int i = 0; i < m; i++)
    {
        unionAyB[i] = salaA[i];
    }
    int c = 0;
    for(int i = m; i < g; i++)
    {
        unionAyB[i] = salaB[c];
        c++;
    }

    int s = 0;

    for(int i = 0; i < g; i++)
    {
        if(unionAyB[i] > 0)
        {
            s++;
        }
        
    }

    int arrayD[s];
    int h = 0;
    for(int i = 0; i < g; i++)
    {
        if(unionAyB[i] > 0)
        {
            arrayD[h] = unionAyB[i];
            h++;
        }
        
    }   

    printf("La union de ambas clases en el nuevo vector es:\n");
    for (int i = 0; i < g; i++)
    {
        printf("%d - ", unionAyB[i]);
    }

    printf("\nEl nuevo vector D de alumnos no aprobados es:\n");

    for (int i = 0; i < s; i++)
    {
        printf("%d - ", arrayD[i]);
    }
}