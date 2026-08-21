#include <stdio.h>

    typedef struct {
        float nota;
    }Aluno;

int main (){

    Aluno aluno1;
    aluno1.nota = 10;

    float *ptr = &aluno1.nota;

    printf("nota: %.2f\n", aluno1.nota);
    printf("nota address: %p\n", &aluno1.nota);

    *ptr = 7.8;
    
    printf("Nova nota: %.1f", aluno1.nota);


    return 0;
}