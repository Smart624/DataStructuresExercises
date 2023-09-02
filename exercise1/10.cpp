/* Leia as variáveis inteiras n1 e n2 e troque o valor destas variáveis.
 Isto é, n1 deve ficar com o valor de n2 e n2 deve ficar com o valor de n1. Exiba os valores depois da troca.*/

#include <cstdio>

int main(){
    int n[2], aux = 0;

    for (int i = 0; i < 2; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &n[i]);
    }

    aux = n[0];
    n[0] = n[1];
    n[1] = aux;

    for (int i = 0; i < 2; i++){
        printf("Valor %i: %i\n", i+1, n[i]);
    }

    return 0;
}