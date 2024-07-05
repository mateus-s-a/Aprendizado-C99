#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    typedef struct InfPessoas {
        char nome[20];
        char endereco[20];
        char email[50];
        char telefone[14];
    } InfPessoas;

    InfPessoas vt_pessoas[10];
    for(int i=0; i<10; i++) scanf("%s %s %s %s", vt_pessoas[i].nome, vt_pessoas[i].endereco, vt_pessoas[i].email, vt_pessoas[i].telefone);

    printf("\n");

    // Método de ordenação nomeado de selection sort
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if(strcmp(vt_pessoas[i].nome, vt_pessoas[j].nome) < 0) {
                InfPessoas temp = vt_pessoas[i];
                vt_pessoas[i] = vt_pessoas[j];
                vt_pessoas[j] = temp;
            }
        }
    }

    for(int i=0; i<10; i++) printf("%s - %s - %s - %s\n", vt_pessoas[i].nome, vt_pessoas[i].endereco, vt_pessoas[i].email, vt_pessoas[i].telefone);

    system("pause");
    system("cls");
    return 0;
}