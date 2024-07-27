/*15-  Se dispone de datos sobre edades y los pesos de los hijos de varias familias. 
Escribe un programa que lea el número de familias y para cada familia lea el número de hijos 
asi como la edad y el peso de cada hijo, y calcule:
el nº máximo, mínimo y promedio de hijos por familia.
el peso máximo, mínimo y promedio de todos los hijos.
el peso promedio de los hijos menores de 6 años.
el peso promedio de los hijos mayores de 6 años.
.*/

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int numeroFlias, cantidadHijos=0, totalHijos=0;
    int edadHijo;
    float pesoMaximo = 1e-3, pesoMinimo = 1e3, promedioPesos, promedioHijos, totalPeso = 0;
    int minimoHijos = 1e3, maximoHijos = 1e-3;
    float pesoHijo= 0;
    float pesoTotalMenores6 = 0, pesoTotalMayores6 = 0, totalHijosMayores6=0, totalHijosMenores6=0, pesoPromedioMenores6, pesoPromedioMayores6;

    printf("Ingrese el numero de familias censadas: ");
    scanf("%d", &numeroFlias);                  //SE PIDE NUM DE FLIAS
    printf("======================================================\n");
    for(int i = 0;  i < numeroFlias; i++)
    {
        printf("FAMILIA %d:\n", (i+1));
        printf("Ingrese la cantidad de hijos: ");   //INGRESA CANTIDAD HIJOS
        scanf("%d", &cantidadHijos);

        if(cantidadHijos < minimoHijos) minimoHijos = cantidadHijos;   //CALCULO PESO MAX MIN
        if(cantidadHijos > maximoHijos) maximoHijos = cantidadHijos; 

        totalHijos += cantidadHijos;
        for(int j = 0; j < cantidadHijos; j++)
        {   
            printf("\nIngrese Edad del hijo %d: ", (j+1));
            scanf("%d", &edadHijo);                 //INGRESA EDAD Y PESO
            printf("Ingrese el peso del hijo %d: ", (j+1));
            scanf("%f", &pesoHijo);

            totalPeso += pesoHijo;
            
            if(edadHijo < 6) pesoTotalMenores6 += pesoHijo, totalHijosMenores6++; //PESOS
            if(edadHijo > 6) pesoTotalMayores6 += pesoHijo, totalHijosMayores6++;

            if(pesoHijo < pesoMinimo) pesoMinimo = pesoHijo;    //EDADES
            if(pesoHijo > pesoMaximo) pesoMaximo = pesoHijo;
        }
    }
    printf("======================================================================\n");

    promedioHijos = (totalHijos / numeroFlias);
    promedioPesos = totalPeso / cantidadHijos;

    pesoPromedioMenores6 = pesoTotalMenores6 / totalHijosMenores6;
    pesoPromedioMayores6 = pesoTotalMayores6 / totalHijosMayores6;

    printf("El numero maximo de hijos es: %d\n", maximoHijos);
    printf("El numero minimo de hijos es: %d\n", minimoHijos);
    printf("El promedio de hijos por flia es: %.1f\n", promedioHijos);
    printf("El peso Maximo registrado es: %.1f kg\n", pesoMaximo);
    printf("El peso minimo registrado es: %.1f kg\n", pesoMinimo);
    printf("El promedio de peso es: %.1f kg\n", promedioPesos);
    if(totalHijosMenores6 > 0) 
    {
        printf("El peso promedio de los menores de 6 es: %.1f kg\n", pesoPromedioMenores6); 
    }
    else 
    {
        printf("No se registraron hijos menores a 6\n");
    }
    if(totalHijosMayores6 > 0) 
    {
        printf("EL peso promedio de los Mayores de 6 es: %.1f kg\n", pesoPromedioMayores6);
    }
    else
    {
        printf("No se registraron hijos mayores a 6\n");
    }



    

}
        
