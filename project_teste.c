#include <stdio.h>

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
    strcpy(Curso.aluno[0].nome, "Paulo");
    

    return 0;
}