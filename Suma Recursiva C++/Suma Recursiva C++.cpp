#include <stdio.h>

int sumaRecursiva(int n) {
    if (n <= 9)
        return n;
    else
        return sumaRecursiva(n / 10) + n % 10;
}

int main() {
    int n;
    printf("Ingresa un número entero: ");

    if (scanf("%d", &n) != 1) {
        printf("Entrada inválida. Debes ingresar un número entero.\n");
        return 1; // Salir del programa con un código de error
    }

    int resultado = sumaRecursiva(n);
    printf("La suma de los dígitos de %d es: %d\n", n, resultado);
    return 0;
}