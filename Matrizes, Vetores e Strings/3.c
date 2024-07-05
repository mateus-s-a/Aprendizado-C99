#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char frase[101];
    scanf("%[^\n]%*c", frase);

    printf("%c", frase[0]);
    for(int i=0; i<strlen(frase); i++) {
        if(frase[i] == ' ') {
            printf("%c", frase[i+1]);
        }
    }
    printf("\n");

    system("pause");
    return 0;
}