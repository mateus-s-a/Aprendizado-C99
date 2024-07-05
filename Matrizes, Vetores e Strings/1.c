#include <stdio.h>
#include <stdlib.h>

int main() {
    typedef struct Aluno {
        char nome[16];
        float nota;
    } Aluno;
    Aluno alunos[11];

    for(int i=0; i<10; i++) {
        scanf("%s %f", alunos[i].nome, &alunos[i].nota);
        if(alunos[i].nota >= 6) {
            printf("%s\n", alunos[i].nome);
        }
    }

    system("pause");
    return 0;
}