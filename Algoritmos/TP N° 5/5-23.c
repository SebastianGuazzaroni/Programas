/*En un mini supermercado cuenta con dos cajeras, cada día se guarda el total
que cada una de las cajeras recaudo. Al final de la semana, se realiza la suma del total
de ventas de cada cajera y a la que mayor recaudación tiene se le da un premio. Además,
el gerente desea conocer el día de menor venta de cada cajera. Escribir un programa que
permita ingresar la recaudación diaria de cada cajera, utilizando dos vectores para ellos
(cargados desde una función) y luego crear una función que permita determinar cuál es
la cajera que recibirá el premio, y una tercera función que imprima el día de menor
venta de cada cajera*/


#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int totalVentasCajera1[7];
    int totalVentasCajera2[7];
    int totalVentasSemana1 = 0;
    int totalVentasSemana2 = 0;
    int menorVenta1 = 1e5;
    int menorVenta2 = 1e5;
    int diaMenorVenta1=0, diaMenorVenta2=0;
    int totalVentasSemanal = 0;

    for(int i = 0; i <= 6; i++)
    {
        
        printf("Dia %d\n", i+1);
        printf("Total de ventas de la cajera 1: ");
        scanf("%d", &totalVentasCajera1[i]);
        printf("Total de  ventas cajera 2: ");
        scanf("%d", &totalVentasCajera2[i]);

        totalVentasSemana1 += totalVentasCajera1[i];
        totalVentasSemana2 += totalVentasCajera2[i];

    }
    
    totalVentasSemanal = totalVentasSemana2 + totalVentasSemana1;

    for(int i = 0; i <= 6; i++)
    {
        if(totalVentasCajera1[i] < menorVenta1)
        {
            menorVenta1 = totalVentasCajera1[i];
            diaMenorVenta1 = i+1;
        }
        else if(totalVentasCajera2[i] < menorVenta2)
        {
            menorVenta2 = totalVentasCajera2[i];
            diaMenorVenta2 = i+1;
        }
    }
    
    int premio = 0;
    
    if(totalVentasSemana1 > totalVentasSemana2)
    {
        premio = 1;
    }
    else 
    {
        premio = 2;
    }

    printf("Total de ventas de la semana: %d\n", totalVentasSemanal);
    printf("El premio es para la cajera: %d\n", premio);
    printf("Dia en que hubo menor venta de cajera 1: %d\n", diaMenorVenta1);
    printf("Dia en que hubo menor venta para cajera 2: %d", diaMenorVenta2);
}