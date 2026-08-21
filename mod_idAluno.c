#include <stdio.h>

    typedef struct {
        char name[50];
        int id;
        float grade;
    }Aluno;

    Aluno *searchAlunos(Aluno p[], int totalAlunos, int idProcurado){
        for(int i = 0; i < totalAlunos; i++){
            if(p[i].id == idProcurado){
                return &p[i];
            }
    }
    return NULL;

}

int main(){

    Aluno students[3] = {{"Gabriel", 4, 4.6},
                         {"Thiago", 3, 7.8},
                         {"Paulo", 2, 9.9 }};
    
    printf("Aluno: %s, Id: %d, nota: %.1f\n", students[0].name, students[0].id, students[0].grade);
    printf("Aluno: %s, Id: %d, nota: %.1f\n", students[1].name, students[1].id, students[1].grade);
    printf("Aluno: %s, Id: %d, nota: %.1f", students[2].name, students[2].id, students[2].grade);


    return 0;
}