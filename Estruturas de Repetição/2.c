#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if(x <= 0) printf("Numero invalido\n");
    else for(int i=1; i<=x; i++) printf("O quadrado de %d eh %d\n", i, i*i);

    return 0;
}