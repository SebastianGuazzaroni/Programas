
#include <stdio.h>
#include <limits.h>

int main() {
    int valor;
    int totalSucursal = 0;
    int cantidadValores = 0;
    int maximoGlobal = INT_MIN;
    int sucursalMax = -1;
    int posicionMax = -1;
    int sucursalActual = 1;
    int posicionRelativa = 0;
    int valorMaximoSucursal = INT_MIN;
    int posicionMaxSucursal = -1;

    printf("Ingrese los valores de ventas (finalice con -1):\n");

    while (1) {
        scanf("%d", &valor);

        if (valor == -1) {
            if (cantidadValores > 0) {
                // Procesar la última sucursal
                printf("Sucursal %d:\n", sucursalActual);
                printf("  Promedio de ventas: %.2f\n", (float)totalSucursal / cantidadValores);
                printf("  Total de ventas: %d\n", totalSucursal);

                if (valorMaximoSucursal > maximoGlobal) {
                    maximoGlobal = valorMaximoSucursal;
                    sucursalMax = sucursalActual;
                    posicionMax = posicionMaxSucursal;
                }
            }
            break;
        } else if (valor == 0) {
            if (cantidadValores > 0) {
                // Procesar la sucursal actual
                printf("Sucursal %d:\n", sucursalActual);
                printf("  Promedio de ventas: %.2f\n", (float)totalSucursal / cantidadValores);
                printf("  Total de ventas: %d\n", totalSucursal);

                if (valorMaximoSucursal > maximoGlobal) {
                    maximoGlobal = valorMaximoSucursal;
                    sucursalMax = sucursalActual;
                    posicionMax = posicionMaxSucursal;
                }
            }
            // Reiniciar variables para la siguiente sucursal
            totalSucursal = 0;
            cantidadValores = 0;
            valorMaximoSucursal = INT_MIN;
            posicionRelativa = 0;
            sucursalActual++;
        } else {
            // Acumular valores de la sucursal
            totalSucursal += valor;
            cantidadValores++;
            if (valor > valorMaximoSucursal) {
                valorMaximoSucursal = valor;
                posicionMaxSucursal = posicionRelativa;
            }
            posicionRelativa++;
        }
    }

    if (sucursalMax != -1) {
        printf("Valor máximo: %d encontrado en la sucursal %d, posición %d\n", maximoGlobal, sucursalMax, posicionMax + 1);
    } else {
        printf("No hay datos para procesar.\n");
    }

    return 0;
}