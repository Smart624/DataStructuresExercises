#include <cstdio>

int main() {
    int numero;

    printf("Por favor digite o numero necessario: ");
    scanf("%d", &numero);  // differenca entre %d e %i eh que %i aceita numeros em octal e hexadecimal

    numero = numero + 5;

    printf("%d\n", numero);

    numero = numero * 3;

    printf("%d", numero);

    return 0;
}