#include <stdio.h>
#include <string.h>

    typedef struct{
        char nome[50];
        int id;
        float nota;
    }Aluno;

    typedef struct {
        char idioma[50];
        char serie[50];
        Aluno aluno[30];
        int totalAluno;
    }Turma;

int main() {

    Turma Curso;
    Curso.totalAluno = 3;

    printf("Em qual turma(idioma) esse aluno(s) se encontra(m) matriculado(s): ");
    scanf("%49s", Curso.idioma);
    
    for(int i = 0; i < Curso.totalAluno; i++){

        printf("Informe o nome do aluno: ");
        scanf("%49s", Curso.aluno[i].nome);
        printf("Informe a nota do aluno: ");
        scanf("%f", &Curso.aluno[i].nota);

        printf("Nome: %s\n", Curso.aluno[i].nome);
        printf("Nota: %.1f\n", Curso.aluno[i].nota);
    }
    printf("Curso: %s\n", Curso.idioma);
    
    return 0;
}