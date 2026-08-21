#include <stdio.h>

    typedef struct{
        char nome[50];
        int id;
        float nota;
    }Aluno;

    void updateNota(Aluno *p, float newNota);

int main (){

    Aluno aluno1;
    aluno1.nota = 5.5;
    printf("Nota: %.1f\n",aluno1.nota);

    updateNota(&aluno1, 7.8);
    printf("Nova nota: %.1f", aluno1.nota);
    return 0;
}

void updateNota(Aluno *p, float newNota){
    p->nota = newNota;
}