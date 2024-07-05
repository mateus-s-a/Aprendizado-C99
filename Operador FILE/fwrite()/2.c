#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch[15] = "Teste geral";
    int vt[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    FILE *ptnArq;
    ptnArq = fopen("binario.bin", "wb");

    if(ptnArq != NULL) {
        printf("Arquivo criado com sucesso.\n");
    } else {
        printf("Arquivo nao criado.\n");
        system("pause");
        exit(1);
    }

    fwrite(ch, sizeof(char), 15, ptnArq);
    fwrite(vt, sizeof(int), 15, ptnArq);

    fclose(ptnArq);

    system("pause");

    return 0;
}
