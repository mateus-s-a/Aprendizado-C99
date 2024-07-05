#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor_Inicial;
    scanf("%d", &valor_Inicial);

    printf("%.2f\n", (((valor_Inicial * 23) / 100.00) - valor_Inicial) * (-1));

    return 0;
    system("pause");
}