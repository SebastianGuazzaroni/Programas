/*Dado un arreglo DATO de componentes de números reales mayores a cero de N
elementos y otro arreglo BAJAS de M elementos y componentes del mismo tipo que
el arreglo DATO, actualizar este último arreglo de manera que se eliminen de la
estructura las componentes que están en el arreglo BAJAS.
 Mostrar el nuevo arreglo DATO luego de la actualización. */

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int N = 0, M = 0, C = 0; 
    float DATO[N];
    float BAJAS[M];
    float nuevoDATO[C];
    

    printf("Cantidad N (positivo) de numeros del arreglo: ");
    scanf("%d", &N);

    while(N <= 0)
    {
        
        printf("Cantidad N (positivo) de numeros del arreglo: ");
        scanf("%d", &N);
        
    }

    printf("Cantidad M (postivo) de numeros del arreglo: ");
    scanf("%d", &M);
    
    while( M <= 0)
    {
        printf("Cantidad M (postivo) de numeros del arreglo: ");
        scanf("%d", &M);

    }

    for(int i = 0; i <= N; i++)
    {   
        
        printf("DATOS (%d):  ", i+1);
        scanf("%f", &DATO[i]);
        
        
    }

    for(int j = 0; j <= M; j++)
    {
        printf("BAJAS (%d): ", j+1);
        scanf("%f", &BAJAS[j]);
    }
   
    if(M >= N)
    {
        C = M;
    }
    else
    {
        C = N;
    }
    for(int i = 0; i <= C; i++)
    {
        if(DATO[i] == BAJAS[i])
        {
            nuevoDATO[i] = DATO[i];
        }
        else
        {
            nuevoDATO[i] = BAJAS[i];
        }
    }
    printf("Nuevo arreglo DATO:");
    for(int i = 0; i <= C; i++)
    {
        printf("%.0f\n", nuevoDATO[i]);
    }
    



}
    

    


