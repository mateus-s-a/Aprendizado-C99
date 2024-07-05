#include <stdio.h>

int main() {
    int vt[21];
    float soma = 0;
    int i;

    for(i=0; i<21; i++) {
        scanf("%d", &vt[i]);
        if(vt[i] > 20) break;
        soma += vt[i];
    }
    if(i == 0) printf("Divisao por zero\n");
    else printf("%.2f\n", soma / (float)i);
    return 0;
}