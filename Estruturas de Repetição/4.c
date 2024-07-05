#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if(x <= 0) printf("Intervalo invalido\n");
    else for(int i=1; i<=x; i++) printf("%d centimetros = %.2f polegadas\n", i, i*0.393701);

    return 0;
}