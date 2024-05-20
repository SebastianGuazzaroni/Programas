/*10- Para un control se pide registrar las temperaturas promedio de N días (N<25) en Tierra
del Fuego en invierno. Si la suma de las componentes resulta mayor que cero imprimir
las temperaturas de índice par (índice- temperatura) y sino las de índice impar. Validar
N.*/

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Ingrese cantidad de dias (menor a 25): ");
    scanf("%d", &n);

    while (n < 0 || n >= 25)
    {
        printf("VALOR INCORRECTO. INTENTE DE NUEVO");
        printf("Ingrese cantidad de dias (menor a 25): ");
        scanf("%d", &n);
    }

    float temperaturas[n];

    //llena el array 
    for(int i = 0; i < n; i++)
    {
        printf("Temperatura del dia %d: ", i+1);
        scanf("%f", &temperaturas[i]);
    }
    
    float suma = 0;
    //determina la suma de temps.
    for(int i = 0; i < n; i++)
    { 
        suma += temperaturas[i];
    }
   
    printf("La suma de temperaturas: %.2f\n", suma);

    //imprime los pares si la suma de temps. es mayor a cero
    if(suma > 0)
    {
        printf("Los numeros pares:\n");
        for(int i = 0; i < n; i++)
        {
            int x = temperaturas[i];
            if(x % 2 == 0)
            {
                printf("%.2f\n", temperaturas[i]);
            }
        }
    }
    //imprime los impares si la suma de temps. es menor que cero 
    else if(suma < 0)
    {
        printf("Los numeros impares:\n");
        for(int i = 0; i < n; i++)
        {
            int c = temperaturas[i];
            if(c < 0 && c % 2 != 0)
            {
                printf("%.2f\n", temperaturas[i]);
            }
        }
    }
    
    
    
}