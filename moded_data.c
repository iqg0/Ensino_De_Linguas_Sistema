#include <stdio.h>
    typedef struct {
        char aluno[50];
        float nota;
    }Aluno;

    int updateNota(Aluno p, float newNota){
        p.nota  = newNota;
        return newNota;
    }    

int main(){

    Aluno aluno1 = {"teste", 8};

    printf("Nota antiga: %.2f\n", aluno1.nota);

    float alunonota =  updateNota(aluno1, 7) ;
    printf("Nota depois: %.2f\n", aluno1.nota);
    return 0;
}