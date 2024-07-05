#include <stdio.h>
#include <stdlib.h>

int verificarNumPrimo(int n) {
    int c;
    
    if(n <= 0) {
        printf("Numero invalido\n");
        exit(0);
    } else {
        for(int i=1; i<=n; i++) {
            if(n % i == 0) c++;
        }
        if(c == 2) printf("Eh primo\n");
        else printf("Nao eh primo\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    verificarNumPrimo(n);

    system("pause");
    system("cls");
    return 0;
}