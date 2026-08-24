#include <stdio.h>
#include <string.h>

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

int main (){

     Aluno students[3] = {{"Gabriel", 4, 4.6},
                          {"Thiago", 3, 7.8},
                          {"Paulo", 2, 9.9}};
    
    printf("Aluno: %s, Id: %d, nota: %.1f\n", students[0].name, students[0].id, students[0].grade);
    printf("Aluno: %s, Id: %d, nota: %.1f\n", students[1].name, students[1].id, students[1].grade);
    printf("Aluno: %s, Id: %d, nota: %.1f\n", students[2].name, students[2].id, students[2].grade);

    char escolha[7] = "\0";

    while (strcmp(escolha, "sair")){
        printf("Digite sair para encerrar // Digite buscar para continuar: ");
        scanf("%6s", escolha);

            if(strcmp (escolha, "buscar") == 0){
                int idBuscado = 0;
                printf("Informe o id do aluno a ser buscado: ");
                scanf("%d", &idBuscado);

                Aluno *found = searchAlunos(students, 3, idBuscado);

                    if(found != NULL){
                        printf("Aluno buscado: %s: \n A nota do aluno buscado: %.1f", found->name, found->grade);
                    }
                    else{
                        printf("Aluno nao encontrado");
                        return 0;
                    }
            }

        
    }
}