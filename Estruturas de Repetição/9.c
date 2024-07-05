#include <stdio.h>

int main() {
    int ini, fim, c = 0;
    scanf("%d %d", &ini, &fim);

    if(!(ini > fim || ini <= 0)) {
        for(int i=ini; i<=fim; i++) {
            int soma = 0;
            for(int j=1; j<=i; j++) {
                if(i % j == 0) {
                    soma += j;
                }
            }
            if((soma - i) == i) {
                printf("%d\n", i);
                c++;
            }
        }
        printf("TOTAL: %d\n", c);
    }
    else {
        printf("Intervalo invalido\n");
    }

    return 0;
}