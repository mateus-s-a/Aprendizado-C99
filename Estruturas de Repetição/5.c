#include <stdio.h>

int main() {
    int vt[100];
    int soma = 0;
    
    for(int i=0; i<100; i++) {
        scanf("%d", &vt[i]);
        soma += vt[i];
        if(soma > 100) break;
    }

    if(vt[0] == 0) printf("%.2f\n", soma / 10.0);
    else printf("%.2f\n", soma / (float)vt[0]);

    return 0;
}