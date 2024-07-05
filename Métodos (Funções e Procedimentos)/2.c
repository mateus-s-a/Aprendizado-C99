#include <stdio.h>
#include <stdlib.h>

int getFatorial(int n) {
    if(n < 0) {
        printf("Numero invalido\n");
        exit(0);
    } else if(n == 0) printf("1\n");
    else {
        for(int i=n-1; i>=1; i--) n *= i;
        printf("%d\n", n);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    getFatorial(n);

    system("pause");
    return 0;
}