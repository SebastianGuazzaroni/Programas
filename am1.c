#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

double calculoLimiteB(double x);

int main()
{
    double x, epsilon;
    double resultado;

    printf("Ingrese el valor inicial de x: ");
    scanf("%lf", &x);

    if(x == 0)
    {
        printf("El valor de x no puede ser 0 (cero): ");
        scanf("%lf", &x);
    }
    
    do
    {
        printf("ingrese distancia entre f(x) y epsilon (epsilon positivo): ");
        scanf("%lf", &epsilon);
    }while (epsilon <= 0 );

    while(fabs(x) > epsilon)
    {
        resultado = calculoLimiteB(x);
        printf("X: %lf, e^x - 1 / x: %lf\n", x, resultado);
        x /= 2; 
    }
    




}
double calculoLimiteB(double x)
{
    const float e = 2.71828182846;
    return ((pow(e, x) - 1 )/ x);
}