/*23- 5 km durante 10 días, para determinar si es apto para la prueba de 5 Kilómetros o debe buscar otra especialidad.
 Para considerarlo apto debe cumplir por lo menos una de las siguientes condiciones:
	- Que en ninguna de las pruebas haga un tiempo mayor a 16 minutos.
	- Que al menos en una de las pruebas realice un tiempo mayor a 16 minutos.
    - Que su promedio de tiempos sea menor o igual a 15 minutos.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    float tiempo, totalTiempos=0, promedioTotal=0;
    int tiempoMayor16=0, tiempoMenor16=0, totalPruebas=4;

    for(int i = 0; i < totalPruebas; i++)
    {
        printf("Ingrese el tiempo de la prueba (minutos): ");
        scanf("%f", &tiempo);

        totalTiempos += tiempo;
        if(tiempo <= 16) tiempoMenor16++;
        if(tiempo > 16) tiempoMayor16++;
    }

    promedioTotal = totalTiempos / totalPruebas;

    int a=0, b=0, c=0;

    if(tiempoMenor16 == totalPruebas) 
    {
        a = 1;
    }
    if(tiempoMayor16 <= 1) 
    {
        b = 1;
    }
    else if(promedioTotal <= 15)
    {
        c = 1;
    } 

    if(a == 1 || b ==1 || c == 1) printf("El atleta cumple los requisitos");
    else 
    {
        printf("el atleta no cumple los requisitos");
    }
}