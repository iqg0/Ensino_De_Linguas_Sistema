#include <stdio.h>
#include <string.h>

    typedef struct{
        char nome[50];
        int id;
    }Aluno;

    typedef struct {
        char idioma[50];
        char serie[50];
        Aluno aluno[30];
        int totalAluno;
        int nota;
    }Turma;

int main() {

    Turma Curso;
    printf("Informe o nome do aluno: ");
    scanf("%49s", Curso.aluno[0].nome);
    




    printf("Nome: %s\n", Curso.aluno[0].nome);

    return 0;
}