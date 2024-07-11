#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

void Menu(int entero1, int  entero2);
int imparesComprendidos(int entero1, int entero2);
int siguienteMayor_anteriorMenor(int entero1, int entero2);
int numeroPrimo(int entero1, int entero2);
int factorial(int entero1, int entero2);

int main()
{
    int entero1, entero2;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &entero1);

    printf("Ingrese el segundo numero entero: ");   
    scanf("%d", &entero2);
    
    while (1)
    {
        Menu(entero1, entero2);
    }

    

}
void Menu(int entero1, int entero2)
{
    int opcion;

    printf("\nIngrese una opcion: \n");
    printf("1 - Impares comprendidos entre los numeros ingresados\n");
    printf("2 - Siguiente numero del mayor y anterior del menor\n");
    printf("3 - Numero primo\n");
    printf("4 - Factorial de cada numero\n");
    printf("5 - Divisores de cada numero\n");
    printf("6 - Salir\n");
    printf("Elija una opcion: ");
    scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Los impares comprendidos entre ambos enteros son: %d", imparesComprendidos(entero1, entero2));
            break;
        case 2:
            siguienteMayor_anteriorMenor(entero1, entero2);
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            exit(-1);
            break;    
        default:
            printf("Ingrese una opcion: \n");
            printf("1 - Impares comprendidos entre los numeros ingresados\n");
            printf("2 - Siguiente numero del mayor y anterior del menor\n");
            printf("3 - Numero primo\n");
            printf("4 - Factorial de cada numero\n");
            printf("5 - Divisores de cada numero\n");
            printf("6 - Salir\n");
            printf("Elija una opcion: ");
            scanf("%d", &opcion);
            break;
        }  
    
    


}
int imparesComprendidos(int entero1, int entero2)
{
    int impares = 0;
    for(int i = entero1; i < entero2; i++)
    {
        if(i % 2 != 0)
        {
            impares++;
        }
    }
    return impares;
}
int siguienteMayor_anteriorMenor(int entero1, int entero2)
{
    int siguiente, anterior;
    if(entero1 > entero2)
    {
        anterior = entero2 - 1;
        siguiente = entero1 + 1;

    }
    else if(entero2 > entero1)
    {
        anterior = entero1 - 1;
        siguiente = entero2 + 1;

    }
    return printf("El siguiente del mayor es: %d. El anterior del menor es: %d", siguiente, anterior);
}
int numeroPrimo(int entero1, int entero2)
{
    int primo1, primo2;

    if(entero1 % entero1 == 0 && entero1 % 1 == 0)
    {
        
    }
    if(entero2 % entero2 == 0 && entero2 % 1 == 0)
    {
        primo2 = entero2;
    }

}
int factorial(int entero1, int entero2)
{
    int factorial1, factorial2

    for(int i = entero1; i )
}