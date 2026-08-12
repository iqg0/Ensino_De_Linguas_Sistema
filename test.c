#include<stdio.h>

    typedef struct {
        char nome[50];
        int idade;
        int id;
    }Aluno;

    typedef struct{
        char nome[50];
        char idioma[50];
        int SalaNum;
    }Turma;

int main(){

    Aluno lista[3] = {
        ("Test", 19, 120),
        ("Test2", 20, 121),
        ("Test3", 25, 122)
    };


}