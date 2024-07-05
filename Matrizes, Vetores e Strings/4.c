#include <stdio.h>
#include <stdlib.h>

int main() {
    int vt[11], menor, maior;

    for(int i=0; i<10; i++) scanf("%d", &vt[i]);

    menor = vt[0];
    maior = vt[0];

    for(int i=0; i<10; i++) {
        if(vt[i] < menor) menor = vt[i];
        if(vt[i] > maior) maior = vt[i];
    }

    printf("%.2f\n", (menor + maior) / 2.00);

    system("pause");
    return 0;
}