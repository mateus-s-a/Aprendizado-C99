#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Coordenadas;

int main() {
    Coordenadas lista_pontos[10];
    double distancia, soma;
    int index = 0;
    double vt_somas[10] = {0};

    for(int i=0; i<10; i++) {
        scanf("%d %d", &lista_pontos[i].x, &lista_pontos[i].y);
    }

    for(int i=0; i<10; i++) {
        soma = 0;
        for(int j=0; j<10; j++) {
            if(i != j) {
                distancia = sqrt(pow(lista_pontos[j].x - lista_pontos[i].x, 2) + pow(lista_pontos[j].y - lista_pontos[i].y, 2));
                soma += distancia;
            }
        }
        vt_somas[i] = soma;
    }

    // verifica o menor valor dentro do vetor vt_somas e retorna o index do mesmo
    for(int i=0; i<10; i++) if(vt_somas[i] < vt_somas[index]) index = i;

    printf("%d %d\n", lista_pontos[index].x, lista_pontos[index].y);

    system("pause");
    system("cls");
    return 0;
}