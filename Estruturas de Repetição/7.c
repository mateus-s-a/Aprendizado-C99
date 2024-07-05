#include <stdio.h>
#include <math.h>

int main() {
    int qtd_Termos;
    float pi = 0.00000;
    scanf("%d", &qtd_Termos);

    for(int i = 0; i < qtd_Termos; i++) pi += (4 * pow(-1, i)) / (2 * i + 1);
    printf("%.5f\n", pi);

    return 0;
}