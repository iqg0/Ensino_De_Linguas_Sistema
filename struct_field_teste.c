#include<stdio.h>
#include<string.h>

    typedef struct {
        char Aluno[50];
        int IdAluno;
    }Escola;

    
    typedef struct {
        char Materia[50];
        Escola NomeAlunos[5];
        int NumeroSala;
    }Curso;

int main(){

    Curso MeuCurso;
    strcpy(MeuCurso.NomeAlunos[0].Aluno, "Gabriel");
    Escola. = 1;

    return 0;
}