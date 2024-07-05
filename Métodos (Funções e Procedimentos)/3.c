#include <stdio.h>
#include <stdlib.h>

void getFibonacci(int termos) {
    if(termos <= 0) {
        printf("Numero invalido\n");
        exit(0);
    } else {
        int vt_termos[termos];
        vt_termos[0] = 0;
        vt_termos[1] = 1;
        for(int i=2; i<termos; i++) {
            vt_termos[i] = vt_termos[i-1] + vt_termos[i-2];
        }
        for(int i=0; i<termos; i++) printf("%d ", vt_termos[i]);
        printf("\n");
    }
}

int main() {
    int termos;
    scanf("%d", &termos);

    getFibonacci(termos);

    system("pause");
    system("cls");
    return 0;
}