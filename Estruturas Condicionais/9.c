#include <stdio.h>

int main() {
    int vt[3];
    scanf("%d %d %d", &vt[0], &vt[1], &vt[2]);

    // verifica qual o maior elemento do vt e o imprime
    if(vt[0] > vt[1] && vt[0] > vt[2]) printf("%d\n", vt[0]);
    else if(vt[1] > vt[0] && vt[1] > vt[2]) printf("%d\n", vt[1]);
    else printf("%d\n", vt[2]);

    return 0;
}