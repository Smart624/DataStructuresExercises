/*1-) Faça um programa que receba do usuário o número de lados e o tamanho dos lados de um polígono regular e imprima o valor da área do polígono.
 O programa deve utilizar uma estrutura switch-case para decidir que fórmula de cálculo utilizar, de acordo com o número de
 lados do polígono. Se o número de lados for diferente de 3, 4 ou 6 o programa deve informar: “não sei calcular a área”. Áreas:
a. Triângulo: A = L*L*1.73/4
b. Quadrado: A = L*L
c. Hexágono: A = 6*L*L*1.73/4; */

#include <cstdio>

typedef struct {
    int lados;
    float tamanho;
} poligono;

float trianguloCalcular(poligono *ponteiro){
    return ponteiro->tamanho * ponteiro->tamanho * 1.73 / 4;
}

float quadradoCalcular(poligono *ponteiro){
    return ponteiro->tamanho * ponteiro->tamanho;
}

float hexagonoCalcular(poligono *ponteiro){
    return (6 * ponteiro->tamanho * ponteiro->tamanho * 1.73) / 4;  // se for ponteiro->tamanho *2 ele nao funciona porque ele multiplica por 2 o tamanho do lado
}

int main(){

    poligono p, *ponteiro = &p;

        printf("Digite a quantidade de lados: ");
        scanf("%i", &ponteiro->lados);
        printf("Digite o tamanho dos lados: ");
        scanf("%f", &ponteiro->tamanho);

switch (ponteiro->lados){
    case 3:
        printf("Area do triangulo: %f\n", trianguloCalcular(ponteiro));
        break;
    case 4:
        printf("Area do quadrado: %f\n", quadradoCalcular(ponteiro));
        break;
    case 6:
        printf("Area do hexagono: %f\n", hexagonoCalcular(ponteiro));
        break;
    default:
        printf("Nao sei calcular a area\n");
        break;

};
    return 0;
}