#include <stdio.h>

int main() {
    double val_dinheiro;
    int contador = 0;
    scanf("%lf", &val_dinheiro);
    val_dinheiro *= 100;

    // Array com os valores das notas e moedas
    float valores[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    char *notas_moedas[] = {"nota(s) de 100 reais", "nota(s) de 50 reais", "nota(s) de 20 reais", "nota(s) de 10 reais", "nota(s) de 5 reais", "nota(s) de 2 reais", "moeda(s) de 1 real", "moeda(s) de 50 centavos", "moeda(s) de 25 centavos", "moeda(s) de 10 centavos", "moeda(s) de 5 centavos", "moeda(s) de 1 centavo"};

    for(int i = 0; i < 12; i++) {
        while(val_dinheiro >= valores[i]) {
            contador++;
            val_dinheiro -= valores[i];
        }
        if(contador > 0) printf("%d %s\n", contador, notas_moedas[i]);
        contador = 0;
    }

    return 0;
}
