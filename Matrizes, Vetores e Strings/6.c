#include <stdio.h>
#include <stdlib.h>

int main() {
    int ordem_Matriz;
    scanf("%d", &ordem_Matriz);

    int matriz[ordem_Matriz][ordem_Matriz];

    for(int i=0; i<ordem_Matriz; i++) {
        for(int j=0; j<ordem_Matriz; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i=0; i<ordem_Matriz; i++) {
        for(int j=0; j<ordem_Matriz; j++) {
            if(j > i) {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    printf("\n");

    system("pause");
    return 0;
}