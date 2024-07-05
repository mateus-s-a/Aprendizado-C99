#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char usuario[20];
    char senha[20];
} Tabela;

int main() {
    Tabela vt_tabela[10];
    char input[2][20];
    for(int i=0; i<10; i++) scanf("%d %s %s", &vt_tabela[i].id, vt_tabela[i].usuario, vt_tabela[i].senha);

    scanf("%s %s", input[0], input[1]);

    for(int i=0; i<10; i++) if(strcmp(vt_tabela[i].usuario, input[0]) == 0 && strcmp(vt_tabela[i].senha, input[1]) == 0) printf("ID:%d\n", vt_tabela[i].id);

    system("pause");
    system("cls");
    return 0;
}