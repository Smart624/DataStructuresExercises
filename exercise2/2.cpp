/*
 * 2. Crie uma aplicação utilizando um ponteiro para uma estrutura, ela deverá receber, matricula, nome e uma nota de uma pessoa, em seguida mostre esses dados.
(utilizar ponteiro e malloc)
 */

#include <cstdio>
#include <cstdlib>
#include <cstring>

typedef struct {
    int matricula;
    char nome[100];
    float nota;
} Aluno;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int quantidadeAlunos() {
    int quantidade;
    printf("Enter the number of students: ");
    scanf("%d", &quantidade);
    return quantidade;
}

void alocarMemoria(Aluno **studentPointer, int quantidade) {
    *studentPointer = (Aluno *) calloc(quantidade, sizeof(Aluno));
    if (*studentPointer == NULL) {
        printf("Memory allocation error");
        exit(1);
    }
}

void input(Aluno *studentPointer, int quantidade) {
    for (int i = 0; i < quantidade; ++i) {
        printf("Enter the name of the next student: ");
        limparBuffer();  // Clear the buffer
        fgets(studentPointer[i].nome, 100, stdin);
        // Remove trailing newline character
        studentPointer[i].nome[strcspn(studentPointer[i].nome, "\n")] = '\0';

        printf("Enter the registration of %s: ", studentPointer[i].nome);
        scanf("%d", &studentPointer[i].matricula);
        printf("Enter the grade of %s: ", studentPointer[i].nome);
        scanf("%f", &studentPointer[i].nota);
    }
}

void output(Aluno *studentPointer, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("\n");
        printf("Student name %d: %s\n", i + 1, studentPointer[i].nome);
        printf("Student registration %d: %d\n", i + 1, studentPointer[i].matricula);
        printf("Student grade %d: %.2f\n", i + 1, studentPointer[i].nota);
    }
}

void desalocarMemoria(Aluno **studentPointer) {
    free(*studentPointer);
    *studentPointer = NULL;
}

int main() {
    Aluno *studentPointer = NULL;
    int quantidade = quantidadeAlunos();
    alocarMemoria(&studentPointer, quantidade);
    input(studentPointer, quantidade);
    output(studentPointer, quantidade);
    desalocarMemoria(&studentPointer);
    return 0;
}

