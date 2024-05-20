/*9- Un docente de una universidad le tiene que asignar a cada alumno de su clase un
número. Se pide codificar un programa que me permita ingresar la cantidad de
alumnos N (N< 20). Y a continuación se le pide a cada alumno un número que es
guardado en un vector llamado ALUM. A partir de este conjunto generar otro
conjunto de número llamados FACT en el que cada elemento sea la factorial del
número que cada alumno dio. Finalmente imprimir ambas estructuras a razón de un
valor de cada uno por renglón. Validar N.*/

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("cantidad de alumnos (menor que 20): ");
    scanf("%d", &n);

    while(n < 0 || n > 20)
    {
        printf("cantidad de alumnos (menor que 20): ");
        scanf("%d", &n);
    }

    int ALUM[n];
    int numeroAlumno;
    for(int i = 0; i < n; i++)
    {
        printf("\nIngrese su numero de alumno: ");
        scanf("%d", &numeroAlumno);

        ALUM[i] = numeroAlumno;
    }

    int FACT[n];
    int factorial;
    

    for(int i = 0; i < n; i++)
    {
        factorial = ALUM[i];
        int fac = 1; 

        for(int j = factorial; j > 1; j--)
        {
            fac = fac * j;
        }

        FACT[i] = fac;
    }
    
    printf("N Alumno\tFactorial.\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t \t%d\n", ALUM[i], FACT[i]);
    }

}  