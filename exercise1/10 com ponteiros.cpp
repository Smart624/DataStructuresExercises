/* Leia as variáveis inteiras n1 e n2 e troque o valor destas variáveis.
 Isto é, n1 deve ficar com o valor de n2 e n2 deve ficar com o valor de n1. Exiba os valores depois da troca.*/

#include <cstdio>

void troca (int *n1, int *n2){
    int aux = 0;

    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

int main(){
    int numero[2];

    for (int i = 0; i < 2; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &numero[i]);
    };

    troca(&numero[0], &numero[1]); // chamando a funcao

for (int i = 0; i < 2; i++){
        printf("Valor %i: %i\n", i+1, numero[i]);
}

    return 0;
}

