#include <stdio.h>

    typedef struct {
        char aluno[50];
        int idAluno;
    }Aluno;


     int searchAluno (Aluno p[], int totalAlunos, int idAluno){

        for(int i = 0; i < totalAlunos; i++){
            if(p[i].idAluno == idAluno){
                return p[i].idAluno;
            }
        }
        printf("Aluno nao encontrado!");
        return -1;
    }

    int main(){ 

        

        return 0;
    }