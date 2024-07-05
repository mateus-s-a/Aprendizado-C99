#include <stdio.h>

int main() {
    int c;
    scanf("%d", &c);
    
    if(c >= 100 && c <= 999) printf("%s\n", c % 2 == 0 ? "PAR" : "IMPAR");
    else printf("Numero Invalido\n");

    return 0;
}