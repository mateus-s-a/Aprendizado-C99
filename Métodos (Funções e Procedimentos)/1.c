#include <stdio.h>
#include <stdlib.h>

int verificaErro(char cpf[]) {
    for(int i=0; i<11; i++) {
        if(cpf[i] < '0' || cpf[i] > '9') {
            printf("Numero invalido\n");
            exit(0);
        }
    }

    int contador = 0;
    for(int i=0; i<11; i++) if(cpf[i] == cpf[i+1]) contador++;

    if(contador == 10) {
        printf("Nao eh valido\n");
        exit(0);
    }

    return 0;
}

int verificaCpf(char cpf[]) {
    int soma_res = 0;
    int primeiro_digito = 0;
    int segundo_digito = 0;

    verificaErro(cpf);

    for(int i=0, j=10; i<9; i++, j--) soma_res += j * (cpf[i] - '0');

    soma_res %= 11;
    if(soma_res == 0 || soma_res == 1) primeiro_digito = 0;
    else if(soma_res >= 2 && soma_res <= 10) primeiro_digito = 11 - soma_res;

    soma_res = 0;
    for(int i=0, j=11; i<10; i++, j--) soma_res += j * (cpf[i] - '0');

    soma_res %= 11;
    if(soma_res == 0 || soma_res == 1) segundo_digito = 0;
    else if(soma_res >= 2 && soma_res <= 10) segundo_digito = 11 - soma_res;

    if(primeiro_digito == (cpf[9] - '0') && segundo_digito == (cpf[10] - '0')) printf("Eh valido\n");
    else printf("Nao eh valido\n");
}

int main(){
    char cpf[12];
    scanf("%s", &cpf);
    
    verificaCpf(cpf);
    
    system("pause");
    return 0;
}