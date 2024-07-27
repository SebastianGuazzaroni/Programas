/*14- En un arreglo de n posiciones se encuentran almacenados los importes de n ventas
que se realizaron en el corriente año. Se pide generar y mostrar un vector con los
importes entre $50 y $287. Mostrar los importes de ventas luego de haber ordenado
las componentes del arreglo de menor a mayor*/

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Total de ventas del año: ");
    scanf("%d", &n);

    float valorVentas[n];

    printf("Valores de total de ventas: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%f", &valorVentas[i]);
    }

    int valoresEntre = 0;

    for(int i = 0; i < n; i++)
    {
        if(valorVentas[i] > 50 && valorVentas[i] < 287)
        {
            valoresEntre++;
        }
    }

    float valorVentaEntre[valoresEntre];
    int x = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(valorVentas[i] > 50 && valorVentas[i] < 287)
        {
            valorVentaEntre[x] = valorVentas[i];
            x++;
        }
    }

    for(int i = 0; i < valoresEntre; i++)
    {
        printf("%.2f - ", valorVentaEntre[i]);
    }
    
}