#include <stdio.h>
#include <stdlib.h>

int main() {
    float vel_Inicial, aceleracao, tempo;
    scanf("%f %f %f", &vel_Inicial, &aceleracao, &tempo);

    printf("%.2f\n", (vel_Inicial + aceleracao * tempo));

    system("pause");
    return 0;
}