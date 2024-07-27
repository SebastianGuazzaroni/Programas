#include <stdio.h>

// Prototipos de las funciones
void menu(int *num1, int *num2);
void opcion1(int num1, int num2);
void opcion2(int num1, int num2);
void cambioNumeros(int *num1, int *num2);

int main() {
    int num1, num2;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    menu(&num1, &num2);

    return 0;
}

void menu(int *num1, int *num2) {
    int opcion;
    do {
        printf("\nMenú\n");
        printf("1. Opción 1\n");
        printf("2. Opción 2\n");
        printf("3. Cambiar números\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                opcion1(*num1, *num2);
                break;
            case 2:
                opcion2(*num1, *num2);
                break;
            case 3:
                cambioNumeros(num1, num2);
                break;
            case 4:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
                break;
        }
    } while (opcion != 4);
}

void opcion1(int num1, int num2) {
    printf("Ejecutando opción 1 con números: %d y %d\n", num1, num2);
    // Aquí puedes agregar más lógica según la opción 1
}

void opcion2(int num1, int num2) {
    printf("Ejecutando opción 2 con números: %d y %d\n", num1, num2);
    // Aquí puedes agregar más lógica según la opción 2
}

void cambioNumeros(int *num1, int *num2) 
{
    printf("Ingrese el nuevo primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el nuevo segundo número: ");
    scanf("%d", &num2);
    printf("Números actualizados a: %d y %d\n", *num1, *num2);
}
