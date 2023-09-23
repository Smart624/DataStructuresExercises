/*
 * 1) Crie uma aplicação utilizando uma estrutura, ela deverá receber, matricula, nome e uma nota de uma pessoa, em seguida mostre esses dados. (Struct Básica)
 */

#include <cstdio>
#include <cstring>

typedef struct {
    int matricula;
    char nome[100];
    float nota;
} Aluno;

void input(Aluno *aluno) {
    printf("Enter the student's name: ");
    fgets(aluno->nome, 100, stdin);
    aluno->nome[strcspn(aluno->nome, "\n")] = '\0'; // serve para remover o \n do fgets e substituir por \0 (null) para nao dar erro na hora de imprimir o nome do aluno na tela (nao imprimiria o nome do aluno)

    printf("Enter the student's registration: ");
    scanf("%d", &aluno->matricula);

    printf("Enter the student's grade: ");
    scanf("%f", &aluno->nota);
}

void output(Aluno *aluno) {
    printf("\nStudent name: %s\n", aluno->nome);
    printf("Student registration: %d\n", aluno->matricula);
    printf("Student grade: %.2f\n", aluno->nota);
}

int main() {
    Aluno aluno;
    input(&aluno);
    output(&aluno);
    return 0;
}
