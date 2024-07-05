#include <stdio.h>
#include <stdlib.h>

int main() {
    int vt[11];
    for(int i=0; i<10; i++) {
        scanf("%d", &vt[i]);
    }

    // organiza o vt em ordem decrescente utilizando loop for e uma int temp
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if(vt[j] < vt[i]) {
                int temp = vt[i];
                vt[i] = vt[j];
                vt[j] = temp;
            }
        }
    }

    for(int i=0; i<10; i++) printf("%d ", vt[i]);
    printf("\n");

    system("pause");
    return 0;
}