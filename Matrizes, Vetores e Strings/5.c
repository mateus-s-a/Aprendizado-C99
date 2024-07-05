#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char frase[101];
    bool palindromo = true;

    scanf("%s", frase);
    int tamanho_Frase = strlen(frase);
    
    for(int i=1; i<tamanho_Frase; i++) {
        if(!(frase[tamanho_Frase - i] == frase[i - 1])) {
            printf("Nao eh palindromo\n");
            palindromo = false;
            break;
        }
    }

    if(palindromo) printf("Eh palindromo\n");

    system("pause");
    return 0;
}