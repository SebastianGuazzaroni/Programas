
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int n = 0;
    int m = 0; 
    printf("tamaño vector 1: ");
    scanf("%d", &n);
    printf("Tamaño vector 2: ");
    scanf("%d", &m);

    int vector1[n];
    int vector2[m];
    printf("%d", n);
    printf("vector1\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &vector1[i]);      //carga vector 1
    }

    for(int i = 0; i< m; i++)
    {
        scanf("%d ", &vector2[i]);  //carga vector 2
    }
}