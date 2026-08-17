#include <stdio.h>
#include <string.h>

    typedef struct{
        char nome[50];
        int id;
        int nota;
    }Aluno;

    typedef struct {
        char idioma[50];
        char serie[50];
        Aluno aluno[30];
        int totalAluno;
    }Turma;

int main() {

    Turma Curso;

    int testeC2 = 0;
    
    printf("Informe o nome do aluno: ");
    scanf("%49s", Curso.aluno[0].nome);

    printf("Em qual turma(idioma) esse aluno se encontra matriculado: ");
    scanf("%49s", Curso.idioma);

    printf("Nome: %s\n", Curso.aluno[0].nome);
    printf("Curso: %s", Curso.idioma[0]);

    return 0;
}