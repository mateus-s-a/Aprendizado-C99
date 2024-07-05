#include <stdio.h>
#include <stdlib.h>

int main() {
    int linha, coluna;
    scanf("%d %d", &linha, &coluna);

    int matriz[linha][coluna];

    for(int i=0; i<linha; i++) {
        for(int j=0; j<coluna; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    if(linha == coluna) {
        for(int i=0; i<linha; i++) {
            for(int j=0; j<coluna; j++) {
                if(matriz[i][j] != matriz[j][i]) {
                    printf("Nao eh simetrica\n");
                    return 0;
                }
            }
        }
        printf("Eh simetrica\n");
    } else {
        printf("Nao eh simetrica\n");
    }

    system("pause");
    return 0;
}