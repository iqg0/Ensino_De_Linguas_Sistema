#include <stdio.h>

    typedef struct{
        char nome[50];
        int idade;
    }Pessoa;

    void imprimirPessoa (Pessoa p);

int main(){

    Pessoa pessoa1 = {"paulo", 19};
    imprimirPessoa(pessoa1);

    return 0;
}
    void imprimirPessoa (Pessoa p){
        printf("Nome: %s, idade: %d\n", p.nome, p.idade);
    }