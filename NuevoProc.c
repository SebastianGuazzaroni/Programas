#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

void Menu(int *Numero1, int  *Numero2);
int calculoImparesComprendidos(int Numero1, int Numero2);
int calculoSiguienteMayor_AnteriorMenor(int Numero1, int Numero2);
int calculoNumeroPrimo(int Numero1, int Numero2);
int calculoFactorial(int Numero1, int Numero2);
int calculoDivisores(int Numero1, int Numero2);


int main()
{
    int Numero1, Numero2;
    
    printf("\033[32mIngrese entero uno: ");
    scanf("%d", &Numero1);
    printf("Ingrese entero dos: ");   
    scanf("%d\033[0m", &Numero2);
    
    
    Menu(&Numero1, &Numero2);
    
}

void Menu(int *Numero1, int *Numero2) 
{
    int opcion;

    do 
    {    
        printf("\033[36m================================================================\033[0m");
        printf("\n\033[33mINGRESE UNA OPCION:\033[0m\n");
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
        case 1:
            calculoImparesComprendidos(*Numero1, *Numero2);
            break;
        case 2:
            calculoSiguienteMayor_AnteriorMenor(*Numero1, *Numero2);
            break;
        case 3:
            calculoNumeroPrimo(*Numero1, *Numero2);
            break;
        case 4:
            calculoFactorial(*Numero1, *Numero2);
            break;
        case 5:
            calculoDivisores(*Numero1, *Numero2);
            break;
        case 6:
            printf("SALIENDO...");
            exit(-1);
            break;    
        default:
            printf("\033[36m================================================================\033[0m");
            printf("\n\033[33mINGRESE UNA OPCION:\033[0m\n");
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

int calculoImparesComprendidos(int Numero1, int Numero2)
{
    printf("\033[33mOPCION 1\033[0m\n");
    
    int impares = 0;

    if(Numero1 < Numero2)
    {
        printf("Los impares son:\n");
        for(int i = Numero1 + 1; i < Numero2; i++)
        {
            if(i % 2 != 0)
            {
                printf(" %d ", i);
                impares++;
            }
        }
    }
    if(Numero1 > Numero2)
    {
        printf("Los impares son:\n");
        for(int i = Numero2 + 1; i < Numero1; i++)
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
int calculoSiguienteMayor_AnteriorMenor(int Numero1, int Numero2)
{
    printf("\033[33mOPCION 2\033[0m\n");

    int siguienteMayor, anteriorMenor;
    if(Numero1 > Numero2)
    {
        anteriorMenor = Numero2 - 1;
        siguienteMayor = Numero1 + 1;

    }
    else if(Numero2 > Numero1)
    {
        anteriorMenor = Numero1 - 1;
        siguienteMayor = Numero2 + 1;

    }
    return printf("El siguiente del mayor es: %d.\nEl anterior del menor es: %d\n", siguienteMayor, anteriorMenor);
}

int calculoNumeroPrimo(int Numero1, int Numero2)
{
    printf("\033[33mOPCION 3\033[0m\n");
    
    int cont1 = 0, cont2 = 0;
    bool numeroPrimo1, numeroPrimo2;

    if(Numero1 > 0)
    {
        for(int i = 1; i <= Numero1; i++)
        {
            if(Numero1 % i == 0)
            {
                cont1++;
            }
        }
        if(cont1 == 2) numeroPrimo1 = true;
    }
    if(cont1 != 2) numeroPrimo1 = false;
    
    if(Numero2 > 0)
    {
        for(int j = 1; j <= Numero2; j++)
        {
            if(Numero2 % j == 0)
            {
                cont2++;
            }
        }
        if(cont2 == 2) numeroPrimo2 = true;
    }
    if(cont2 != 2) numeroPrimo2  = false;
    
    if(cont1 == 2 && cont2 != 2) return printf("El numero %d es Primo\n", Numero1);
    if(cont1 != 2 && cont2 == 2) return printf("El numero %d es Primo\n", Numero2);
    if(cont1 != 2 && cont2 != 2) return printf("Ninguno de los numeros es primo\n");
    if(cont1 == 2 && cont2 == 2) return printf("Ambos numeros %d y %d son Primos\n", Numero1, Numero2); 

}
int calculoFactorial(int Numero1, int Numero2)
{
    printf("\033[33mOPCION 4\n\033[0m");

    int factorialNumero1 = 1, factorialNumero2 = 1;
    
   for(int i = 1; i <= fabs(Numero1); i++)
    {
        factorialNumero1 = i * factorialNumero1;
    }

    if(Numero1 < 0) factorialNumero1 = factorialNumero1*(-1);

    for(int i = 1; i <=fabs(Numero2); i++)
    {
        factorialNumero2 = i * factorialNumero2;
    }

    if(Numero2 < 0) factorialNumero2 = factorialNumero2 * (-1);

    return printf("Factorial numero 1: %d.\nFactorial numero 2: %d\n", factorialNumero1, factorialNumero2);
}

int calculoDivisores(int Numero1, int Numero2)
{
    printf("\n\033[33mOPCION 5\033[0m\n");

    printf("Divisores numero 2: ");

    for(int i = 1; i <= fabs(Numero1); i++)
    {
        if(Numero1 % i == 0) printf("%d  ", i);
    }

    printf("Divisores numero 1: ");

    for(int j = 1; j <= fabs(Numero2); j++)
    {
        if(Numero2 % j == 0) printf("%d  ", j);
    }
    printf("\n");
}