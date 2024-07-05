#include <stdio.h>

int main() {
    int c;
    scanf("%d", &c);
    if(c >= 100 && c <= 999) (c % 2 == 0) ? printf("PAR\n") : printf("IMPAR\n");
    else printf("Numero Invalido\n");

    return 0;
}