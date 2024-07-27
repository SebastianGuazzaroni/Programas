/*6- Se tiene almacenado en memoria en un arreglo de una dimensión las notas de 50
alumnos del primer parcial correspondiente a la asignatura “Álgebra”. Mostrar
• la mayor nota
• el porcentaje de alumnos que aprobaron el parcial con nota superior a 6
• el promedio de las notas
• en qué posición del arreglo se encuentra la menor nota. */

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float notasAlgebra[10];
    float nota;
    float mayorNota = 0, menorNota = 100, posicionMenorNota=0;
    float porcentajeNota;
    float notaMayor6;
    float promedioNota;
    float totalNotas;

    for(int i = 0; i < 10; i++)
    {
        
        printf("Ingrese nota del alumno %d: ", (i+1));
        scanf("%f", &nota);

        if(nota > mayorNota)
        {
            mayorNota = nota;
        }

        if(nota > 6)
        {
            notaMayor6++;
        }

        totalNotas += nota;
        notasAlgebra[i] += nota;

        if(nota < menorNota)
        {
            menorNota = nota;
            posicionMenorNota = i;
        }


    }
    porcentajeNota = (notaMayor6 * 10) / 100;
    promedioNota =  totalNotas / 10;
    

    
    printf("Mayor nota: %.2f\n", mayorNota);
    printf("porc. que aprobaron con mas de 6: %.1f\n", porcentajeNota);
    printf("promedio notas entre 10 alumnos: %.2f\n", promedioNota);
    printf("posicion de la menor nota dentro del arreglo: %.0f\n", posicionMenorNota);




}