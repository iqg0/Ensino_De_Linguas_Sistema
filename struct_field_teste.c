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
    MeuCurso.NomeAlunos[0].IdAluno = 19;

    for(int i = 0; i == 0; i++){
        printf("Nome: %s, Id: %d",
                MeuCurso.NomeAlunos[i].Aluno,
                MeuCurso.NomeAlunos[i].IdAluno);
    }

    return 0;
}