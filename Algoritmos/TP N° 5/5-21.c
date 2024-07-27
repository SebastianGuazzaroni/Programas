/*21- Una pequeña aerolínea acaba de comprar una PC para su nuevo sistema automático
de reservaciones. A usted se le ha pedido que programe el nuevo sistema. Usted debe
escribir un programa que asigne los asientos, en cada vuelo, del único avión de la
aerolínea (capacidad: 10 asientos). Su programa debe desplegar el siguiente menú de
alternativas:
Por favor, digite 1 para “ primera clase” Por favor, digite 2 para “ económica”
Si la persona digita 1, su programa debe asignar un asiento en la sección de primera
clase (asientos 1 a 5). Si la persona digita 2, su programa debe asignar un asiento en
la sección económica (asiento 6 a 10). Su programa debe imprimir un pase de abordar
que indique el número de asiento de la persona y si está en la sección de primera clase
o en la sección económica del avión.
Utilice un arreglo para representar la tabla de asientos del avión. Inicialice en 0 todos
los elementos del arreglo para indicar que todos los asientos están libres. Mientras se
asigna cada asiento, el valor de los elementos correspondientes del arreglo se
establece en 1, para indicar que ya está asignado. Cuando la sección está llena,
entonces despliegue el mensaje “el siguiente vuelo parte en tres horas”. */

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>


int clasePremium(int opcion);
int economico(int opcion);

int asientos[10] = {0};

int main()
{

    
    int opcion;

    
    
        printf("Escoja una clase\n");
        printf("1) Premium\n");
        printf("2) Economica\n");
        printf("0) Salir\n");
        printf("Clase: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            return clasePremium();
            break;
        case 2:

            break;
        case 0:
            printf("SALIENDO...");
            
            break;
        default:
            printf("Ingrese una opcion correcta");
            return main();
            break;
        }


    


}

int clasePremium(int opcion)
{
    if(opcion == 1)
    {
        for(int i = 0; i < 5; i++)
        {
            if((asientos[0] && asientos[1] && asientos[2] && asientos[3] && asientos[4]) == 0)
            {
                asientos[i] = 1;
            }
            
        }

    }

}
