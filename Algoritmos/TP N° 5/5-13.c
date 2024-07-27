/*13- Escribir un programa que contenga una función que dado un vector de n elementos
enteros calcule el número de veces que los elementos pasan de crecer a decrecer o
viceversa. */

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Tamaño del vector (N enteros): ");
    scanf("%d", &n);

    while(n < 0)
    {
        printf("NUMERO NO VALIDO. INTENTE DE NUEVO\n");
        printf("Tamaño del vector (N enteros): ");
        scanf("%d", &n);
    }
    
    int elementos[n];
    printf("Carga del vector (N enteros)\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &elementos[i]);
    }

    float tem = 0;
    int crece = 0, decrece = 0;

    for(int i = 0; i < n; i++)
    {
    
        if(elementos[i] > tem)
        {
            crece++;
            tem = elementos[i];
        }
        else if(elementos[i] < tem)
        {
            decrece++; 
            tem = elementos[i];      
        } 
        else if(elementos[i] = tem)
        {
            
        } 
    }

    printf("Veces que crece: %d\n", crece);
    printf("Veces que decrece: %d", decrece);
}