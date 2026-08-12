#include <stdio.h>
#include <string.h>

    struct Pessoa {
        char nome [50];
        int idade;
        int id;
    };

int main(){

    struct Pessoa pessoa1[3] = { // struct Pessoa pessoa1[3] = Declaracao de 3 array de structs
        {"Something", 19, 89},
        {"Something else", 21, 176},
        {"Idk", 79, 389}
    };

    for(int i = 0; i < 3; i++){
        printf("Nome: %s, Idade: %d, Id: %d\n",
                pessoa1[i].nome,
                pessoa1[i].idade,
                pessoa1[i].id);
    }

    return 0;
}