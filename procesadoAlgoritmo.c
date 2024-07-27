#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

void Menu(int *entero1, int  *entero2);
void cambiarNumeros(int *entero1, int *entero2);
int imparesComprendidos(int entero1, int entero2);
int siguienteMayor_anteriorMenor(int entero1, int entero2);
int numeroPrimo(int entero1, int entero2);
int factorial(int entero1, int entero2);
int divisores(int entero1, int entero2);

//----------------MAIN------------------------------------------
int main()
{
    int entero1, entero2;
    
    printf("\033[32mIngrese entero uno: ");
    scanf("%d", &entero1);
    printf("Ingrese entero dos: ");   
    scanf("%d\033[0m", &entero2);
    
    
    Menu(&entero1, &entero2);
    
}
//------------------------------------------------------------------

//---------------------MENU-----------------------------------------
void Menu(int *entero1, int *entero2) 
{
    int opcion;

    do 
    {    
        printf("\033[36m================================================================\033[0m");
        printf("\n\033[33mINGRESE UNA OPCION:\033[0m\n");
        printf("\033[35m0 - Cambiar de numeros\n\033[0m");
        printf("\033[32m1 - Impares comprendidos entre los numeros ingresados\n");
        printf("2 - Siguiente numero del mayor y anterior del menor\n");
        printf("3 - Numero primo\n");
        printf("4 - Factorial de cada numero\n");
        printf("5 - Divisores de cada numero\n\033[0m");
        printf("\033[31m6 - Salir\n\033[0m");
        printf("\033[36m================================================================\n\033[0m");
        printf("\033[33mElija una opcion: \033[0m");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 0: 
            cambiarNumeros(entero1, entero2);
            break;
        case 1:
            imparesComprendidos(*entero1, *entero2);
            break;
        case 2:
            siguienteMayor_anteriorMenor(*entero1, *entero2);
            break;
        case 3:
            numeroPrimo(*entero1, *entero2);
            break;
        case 4:
            factorial(*entero1, *entero2);
            break;
        case 5:
            divisores(*entero1, *entero2);
            break;
        case 6:
            printf("SALIENDO...");
            exit(-1);
            break;    
        default:
            printf("\033[36m================================================================\033[0m");
            printf("\n\033[33mINGRESE UNA OPCION:\033[0m\n");
            printf("\033[35m0 - Cambiar de numeros\n\033[0m");
            printf("\033[32m1 - Impares comprendidos entre los numeros ingresados\n");
            printf("2 - Siguiente numero del mayor y anterior del menor\n");
            printf("3 - Numero primo\n");
            printf("4 - Factorial de cada numero\n");
            printf("5 - Divisores de cada numero\n\033[0m");
            printf("\033[31m6 - Salir\n\033[0m");
            printf("\033[36m================================================================\n\033[0m");
            printf("\033[33mElija una opcion: \033[0m");
            scanf("%d", &opcion);
            break;
        }
    }while (opcion != 6); 
}
//------------------------------------------------------------------------------------

//-----------------------FUNCIONES----------------------------------------------------

void cambiarNumeros(int *entero1, int *entero2) //OPCIONAL
{
    printf("\033[35mOPCION 0: Cambio de numeros\033[0m\n");
    printf("\033[32mIngrese entero uno: ");
    scanf("%d", entero1);
    printf("Ingrese entero dos: ");   
    scanf("%d", entero2);

    printf("Sus nuevos numeros son:\nEntero uno: %d\nEntero dos: %d\033[0m\n", *entero1, *entero2);
}
int imparesComprendidos(int entero1, int entero2)
{
    printf("\033[33mOPCION 1: Impares comprendidos entre ambos numeros\033[0m\n");
    
    int impares = 0;

    if(entero1 < entero2)
    {
        printf("Los impares son:\n");
        for(int i = entero1 + 1; i < entero2; i++)
        {
            if(i % 2 != 0)
            {
                printf(" %d ", i);
                impares++;
            }
        }
    }
    if(entero1 > entero2)
    {
        printf("Los impares son:\n");
        for(int i = entero2 + 1; i < entero1; i++)
        {
            if(i % 2 != 0)
            {
                printf(" %d ", i);
                impares++;
            }
        }
    }
    if(impares > 0) return printf("Total de impares: %d\n", impares);
    if(impares <= 0) return printf("No hay impares entre ambos enteros\n");
}
int siguienteMayor_anteriorMenor(int entero1, int entero2)
{
    printf("\033[33mOPCION 2: Siguiente numero del entero mayor. Anterior numero del entero menor\033[0m\n");

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
    return printf("El siguiente del mayor es: %d.\nEl anterior del menor es: %d\n", siguiente, anterior);
}

int numeroPrimo(int entero1, int entero2)
{
    printf("\033[33mOPCION 3: Verificar numero primo\033[0m\n");
    
    int cont1 = 0, cont2 = 0;
    bool primo1, primo2;

    if(entero1 > 0)
    {
        for(int i = 1; i <= entero1; i++)
        {
            if(entero1 % i == 0)
            {
                cont1++;
            }
        }
        if(cont1 == 2) primo1 = true;
    }
    if(cont1 != 2) primo1 = false;
    
    if(entero2 > 0)
    {
        for(int j = 1; j <= entero2; j++)
        {
            if(entero2 % j == 0)
            {
                cont2++;
            }
        }
        if(cont2 == 2) primo2 = true;
    }
    if(cont2 != 2) primo2  = false;
    
    if(cont1 == 2 && cont2 != 2) return printf("Solo el entero %d es Primo\n", entero1);
    if(cont1 != 2 && cont2 == 2) return printf("Solo el entero %d es Primo\n", entero2);
    if(cont1 != 2 && cont2 != 2) return printf("Ninguno de los enteros es primo\n");
    if(cont1 == 2 && cont2 == 2) return printf("Ambos enteros %d y %d son Primos\n", entero1, entero2); 

}
int factorial(int entero1, int entero2)
{
    printf("\033[33mOPCION 4: Factorial de cada numero\n\033[0m");

    int factorial1 = 1, factorial2 = 1;
    
   for(int i = 1; i <= fabs(entero1); i++)
    {
        factorial1 = i * factorial1;
    }

    if(entero1 < 0) factorial1 = factorial1*(-1);

    for(int i = 1; i <=fabs(entero2); i++)
    {
        factorial2 = i * factorial2;
    }

    if(entero2 < 0) factorial2 = factorial2 * (-1);

    return printf("Entero 1: %d ---> Factorial: %d.\nEntero 2: %d ---> factorial: %d\n", entero1, factorial1, entero2, factorial2);
}

int divisores(int entero1, int entero2)
{
    printf("\n\033[33mOPCION 5: Divisores de cada numero\033[0m\n");

    printf("Entero uno: %d", entero1);
    printf("\tSus Divisores: ");

    for(int i = 1; i <= fabs(entero1); i++)
    {
        if(entero1 % i == 0) printf("%d  ", i);
    }

    printf("\nEntero dos: %d", entero2);
    printf("\tSus Divisores: ");

    for(int j = 1; j <= fabs(entero2); j++)
    {
        if(entero2 % j == 0) printf("%d  ", j);
    }
    printf("\n");
}