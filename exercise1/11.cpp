#include <stdio.h>
#include <stdlib.h>
#include <float.h>

typedef struct {
    float valores[3];
} Numeros;

int main() {
    Numeros *ptr = (Numeros *)calloc(1, sizeof(Numeros));
    Numeros **ptr_ptr = &ptr;

    // Recebendo valores do usuário usando um loop for
    for (int i = 0; i < 3; ++i) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &(*ptr_ptr)->valores[i]);
    }

    // Inicializando variáveis para encontrar o maior, menor e média
    float maior = -FLT_MAX, menor = FLT_MAX, media = 0;

    // Usando um loop for para encontrar o maior, menor e calcular a média
    for (int i = 0; i < 3; ++i) {
        float valor = (*ptr_ptr)->valores[i];
        if (valor > maior) maior = valor;
        if (valor < menor) menor = valor;
        media += valor;
    }
    media /= 3;

    // Mostrando os resultados
    printf("O maior valor é: %.2f\n", maior);
    printf("O menor valor é: %.2f\n", menor);
    printf("A média é: %.2f\n", media);

    // Liberando a memória alocada
    free(ptr);

    return 0;
}
