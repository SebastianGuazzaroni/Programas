/*17- Escriba una función llamada addvec() que valide dos vectores que sean del mismo
tamaño. La función debe sumar cada elemento de los vectores juntos y poner los valores
en un tercer vector, ordenarlo y mostrarlo. */

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>


int addvec(int vector1[], int vector2[], int h, int m);

int main()
{
    int h = 0, m = 0; 
    printf("tamaño vector 1: ");
    scanf("%d", &h);
    printf("Tamaño vector 2: ");
    scanf("%d", &m);

    int vector1[h];
    int vector2[m];

    printf("Vector 1: \n");

    for(int i = 0; i < h; i++)
    {
        scanf("%d ", &vector1[i]);      //carga vector 1
    }

    printf("Vector 2: \n");

    for(int j = 0; j < m; j++)
    {
        scanf("%d ", &vector2[j]);  //carga vector 2
    }

    addvec(vector1, vector2,h,m);
}

int addvec(int vector1[], int vector2[], int h, int m)
{

    int vectorSuma[h];
    int b; 

    if(h == m)
    {
        printf("los vectores son iguales\n");

        for(int i=0; i< h; i++)
        {
            b= vector1[i] + vector2[i];
            vectorSuma[i] = b;
        }

        for(int i = 0; i < h; i++)
        {
            printf("%d- ", vectorSuma[i]);
        }
    }
    //     for(int i = 0; i < n; i++)
    //     {
    //         for(int j = 0; j < n; j++)
    //         {
    //             if(vectorSuma [j] < vectorSuma[i])
    //             {
    //                 vectorSuma[i] = vectorSuma[j];
    //             }
    //         }
    //     }

    //     for(int i = 0; i<n; i++)
    //     {
    //         printf("%d- ", vectorSuma[i]);
    //     }
    // }
}