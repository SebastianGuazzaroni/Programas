/*16- INVERTIR DÍGITOS
a) Diseñar una función que lea un número natural n de 3 dígitos como máximo y
escriba sus dígitos invertidos en un vector.
b) Diseñar una función que haga lo mismo que la anterior, pero que retorne un natural
con los dígitos de n invertidos*/

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int invertido(int n);

int invertido(int n)
{
    int a,b,c;
    if(n < 1000 && n > 99)
    {
        a = n / 100;
        b = n / 10;

    }
}
int main()
{
    int n;
    printf("Ingrese un numero n positivo (maximo 3 digitos): ");
    scanf("%d", &n);

    invertido(n);
}   