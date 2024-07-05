#include <stdio.h>
#include <stdlib.h>

int verificaErro(char cpf[]) {
    for(int i=0; i<11; i++) {
        if(cpf[i] < '0' || cpf[i] > '9') {
            return 1;
        }
    }

    int contador = 0;
    for(int i=0; i<10; i++) {
        if(cpf[i] == cpf[i+1]) {
            contador++;
        }
    }
    if(contador == 10) {
        return 1;
    }

    return 0;
}

void verificaCpf(char nome[], int idade, char cpf[]) {
    int soma_res = 0;
    int primeiro_digito = 0;
    int segundo_digito = 0;

    if(verificaErro(cpf) == 1) {
        return;
    }

    for(int i=0, j=10; i<9; i++, j--) {
        soma_res += j * (cpf[i] - '0');
    }

    soma_res %= 11;
    if(soma_res == 0 || soma_res == 1) {
        primeiro_digito = 0;
    } else if(soma_res >= 2 && soma_res <= 10) {
        primeiro_digito = 11 - soma_res;
    }

    soma_res = 0;
    for(int i=0, j=11; i<10; i++, j--) {
        soma_res += j * (cpf[i] - '0');
    }

    soma_res %= 11;
    if(soma_res == 0 || soma_res == 1) {
        segundo_digito = 0;
    } else if(soma_res >= 2 && soma_res <= 10) {
        segundo_digito = 11 - soma_res;
    }

    if(primeiro_digito == (cpf[9] - '0') && segundo_digito == (cpf[10] - '0')) {
        printf("%s - %d - %s\n", nome, idade, cpf);
    }
}

typedef struct {
    char nome[20];
    int idade;
    char cpf[11];
} TabelaCPF;

int main(){
    TabelaCPF vt_CPFs[10];
    for(int i=0; i<10; i++) {
        scanf("%s %d %s", vt_CPFs[i].nome, &vt_CPFs[i].idade, vt_CPFs[i].cpf);
    }
    
    for(int i=0; i<10; i++) {
        verificaCpf(vt_CPFs[i].nome, vt_CPFs[i].idade, vt_CPFs[i].cpf);
    }
    
    system("pause");
    system("cls");
    return 0;
}