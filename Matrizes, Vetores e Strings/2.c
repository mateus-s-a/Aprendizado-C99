#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char frase[101];
    int c = 0;
    
    scanf("%[^\n]%*c", frase);

    for(int i=65; i<=90; i++) {
        for(int j=0; j<strlen(frase); j++) {
            if(frase[j] == i || frase[j] == i+32) {
                c++;
            }
        }
        if(c != 0) printf("%c = %d\n", i, c);
        c = 0;
    }

    system("pause");
    return 0;
}