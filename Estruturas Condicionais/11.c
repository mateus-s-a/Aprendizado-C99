#include <stdio.h>

int main() {
    char input[5]; // por que 5 em vez 4? é porque o último caractere é o '\0'
    char senha[5] = "nX4%";
    scanf("%4s", input); // %4s para ler apenas os 4 primeiros caracteres

    if(strcmp(input, senha) == 0) printf("Acesso concedido\n"); // strcmp compara se as duas strings são iguais
    else printf("Acesso nao concedido\n");

    return 0;
}