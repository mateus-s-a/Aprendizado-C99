#include <stdio.h>
#include <stdlib.h>

int main() {

    // criando vari�vel ponteiro para o arquivo
    FILE *pont_arq;

    /* abrindo o arquivo
    1° Parâmetro: É uma string que representa o caminho e o nome do arquivo que você deseja abrir.
    2° Parâmetro: Mode de abertura, "a" significa "append" (acrescentar), ou seja, o arquivo será aberto para gravação no final do arquivo. */
    pont_arq = fopen("arquivo.txt", "a");

    // fechando arquivo
    fclose(pont_arq);

    // mensagem para o usuário
    printf("O arquivo foi criado com sucesso!\n");

    /* comando específico da biblioteca <stdlib.h>
    pausa a execução de um programa no CMD até que o usuário pressione qualquer tecla. */
    system("pause");

    return 0;
}
