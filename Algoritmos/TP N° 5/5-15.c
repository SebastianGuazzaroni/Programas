/*15- En un oficina para realizar trámites había dos filas; fila UNO y fila DOS en donde
se tienen cargados los tres últimos dígitos del DNI de los clientes, ambas con N
(N<30) personas. Pero un inconveniente en una de las cajas disponibles hizo
replantear la atención de los clientes. Se debe crear una nueva fila (llamada TRES)
cuyo valores serán en las posiciones pares los valores de los datos de la fila DOS y en
las posiciones impares los valores de la fila UNO. Mostrar las estructuras. Aclaración:
el cero es par.*/

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int numeroPersonas1, numeroPersonas2;

    printf("Cantidad de personas FILA 1: ");
    scanf("%d", &numeroPersonas1);
    printf("Cantidad de personas FILA 2: ");
    scanf("%d", &numeroPersonas2);

    int fila1[numeroPersonas1];
    int fila2[numeroPersonas2];

    printf("Ingrese los 3 ultimos digitos del DNI de la FILA 1: \n");
    for(int i = 0; i < numeroPersonas1; i++)
    {
        printf("%d:", i);
        scanf("%d", &fila1[i]);
    }

    printf("Ingrese los 3 ultimos digitos del DNI de la FILA 2: \n");

    for(int j = 0; j < numeroPersonas2; j++)
    {
        printf("%d:", j);
        scanf("%d", &fila2[j]);
    }

    int numeroPersonas3;
    numeroPersonas3 = numeroPersonas1 + numeroPersonas2;

    int fila3[numeroPersonas3];

    for(int i = 0; i < numeroPersonas3; i++)
    {

        //PAR
        if(i % 2 == 0)
        {
            fila3[i] = fila2[i];
        }
       
            //IMPAR
        if(i % 2 != 0)
        {
            fila3[i] = fila1[i];
        }
        

    }

    printf("Nueva FILA 3:\n");

    for(int i = 0; i < numeroPersonas3; i++)
    {
        printf("%d: %d\n", i, fila3[i]);
    }



}
