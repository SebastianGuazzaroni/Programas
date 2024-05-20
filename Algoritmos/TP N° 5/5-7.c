/*7- Cargar en un arreglo N elementos que almacena números aleatorios enteros positivos,
generar una función por cada ítem pedido, mostrando el resultado en la función
principal.
• La suma de los números pares.
• El mayor número ingresado.
• El porcentaje de números impares.
• La cantidad de números nulos.
. Validar que N sea menor a 80.
*/

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void validar(int array[], int n);
int sumaNumerosPares(int array[], int n);
int mayorNumero(int array[], int n);
float porcentajeImpares(int array[], int n);
int numerosNulos(int array[], int n);

void validar( int array[], int n)
{
    int validarN = 0;
    if(n < 80)
    {
        validarN = 1;
    }
    if(validarN == 1)
    {
        printf("N es menor que 80");
    }
}
int numerosNulos(int array[], int n)
{
    int cantidadNulos = 0; 
    for(int i = 0; i < n; i++)
    {
        if(array[i] == 0)
        {
            cantidadNulos++;
        }
    }
    return cantidadNulos;
}

float porcentajeImpares(int array[], int n)
{
    int impar = 0;
    float porcentajeImpares = 0;
    for(int i = 0; i < n; i++)
    {
        if((array[i] % 2) == 1)
        {
            impar++;
        }
    }
    porcentajeImpares = (impar * 100) / n;

    return porcentajeImpares;
}

int mayorNumero(int array[], int n)
{
    double mayor = 1e-5;

    for(int i = 0; i < n; i++)
    {
        if(array[i] > mayor)
        {
            mayor = array[i];
        }
    }
    return mayor; 
}

int sumaNumerosPares(int array[], int n)
{
    int pares = 0;

    for(int i = 0; i < n; i++)
    {
        if(array[i] % 2 == 0)
        {
            pares += array[i];
        }
        
    }
    return pares;
}

int main()
{
    int n;
    
    printf("Ingrese tamaño del array: ");
    scanf("%d", &n);

    int array[n];
    int numeroAleatorio;

    srand(time(NULL));

    for(int i = 0; i < n; i++)
    {
        numeroAleatorio = rand();
        array[i] = numeroAleatorio;
    }
    printf("El array esta compuesto por los siguientes numeros:\n");

    for(int j = 0; j < n; j++)
    {
        printf("%d - ", array[j]);
    }

    printf("\nLa suma de los numeros pares es: %d", sumaNumerosPares(array, n));
    printf("\nEl mayor numero ingresado es: %d", mayorNumero(array, n));
    printf("\nEl porcentaje de numeros impares con respecto al volumen del array es: %.2f", porcentajeImpares(array, n));
    printf("\nLa cantidad de numeros nulos es: %d\n", numerosNulos(array, n));
    validar(array, n);
}