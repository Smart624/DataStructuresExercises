/*Fazer um programa
que recebe 3 valores não inteiros do usuário e mostra o maior deles, o menor deles e a média.*/

#include <cstdio>

int main() {
    float valores[3];
    float soma = 0;
    float maior = valores[0], media = 0;

    for (int i = 0; i < 3; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }

    float menor = valores[1];

    for (int i = 0; i < 3; i++) {
        soma += valores[i];
    }

    media = soma / 3;

    for (int i = 0; i < 3; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }

    for (int i = 0; i < 3; i++) {
        if (valores[i] < menor) {
            menor = valores[i];
        }
    }
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}