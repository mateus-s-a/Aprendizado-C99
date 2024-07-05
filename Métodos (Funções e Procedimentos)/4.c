#include <stdio.h>
#include <stdlib.h>

int getMMC(int n1, int n2) {
    int mmc;
    for(int i=1; i<=n1*n2; i++) {
        if(i % n1 == 0 && i % n2 == 0) { // Método de Euclides
            mmc = i;
            break;
        }
    }
    printf("%d\n", mmc);
}

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    getMMC(n1, n2);

    system("pause");
    system("cls");
    return 0;
}