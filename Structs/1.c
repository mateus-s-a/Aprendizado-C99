#include <stdio.h>
#include <stdlib.h>

int main() {
    typedef struct Pessoas {
        char nome[20];
        int idade;
    } Pessoas;

    Pessoas vt_pessoas[10];
    for(int i=0; i<10; i++) scanf("%s %d", vt_pessoas[i].nome, &vt_pessoas[i].idade);
    for(int i=0; i<10; i++) if(vt_pessoas[i].idade < 33) printf("%s\n", vt_pessoas[i].nome);

    system("pause");
    system("cls");
    return 0;
}