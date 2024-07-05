#include <stdio.h>

int main() {
    int vt_Idade[6];
    for(int i=0; i<5; i++) scanf("%d", &vt_Idade[i]);
    for(int i=0; i<5; i++) {
        if(vt_Idade[i] >= 18) printf("maior de idade\n");
        else if(vt_Idade[i] < 18 && vt_Idade[i] >= 0) printf("menor de idade\n");
        else printf("idade invalida\n");
    }
    return 0;
}