/*5. Leer un número natural n (no mayor que 100) y asignar a las componentes del
vector de n posiciones los valores 1, 4, 9, 16........etc ( 12
, 22
, 32
...) */


#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int N = 0;
    int valor = 0;
    
    
    printf("Ingrese un numero natural N(no mayor que 100): ");
    scanf("%d", &N);
    while(N>100)
    {
        printf("Ingrese un numero natural N(no mayor que 100): ");
        scanf("%d", &N);
        if(N < 0 || N > 100)
        {
            printf("NUMERO INCORRECTO\n");
            printf("Ingrese un numero natura N(no mayor que 100): ");
            scanf("%d", &N);
        }
    }

    int M;
    M=N;
    int numeros[M];
    
    for(int i = 0; i < N; i++)
    {
        
        valor = pow((i+1), 2);

        numeros[i] = valor;
    }

    for(int j = 0; j < N; j++)
    {
        printf("%d - ", numeros[j]);
    }
    


}