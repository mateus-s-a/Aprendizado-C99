#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main() {
    float raio, altura;
    scanf("%f %f", &raio, &altura);

    printf("%.2f\n", (round(M_PI * 100) / 100.0) * pow(raio, 2) * altura);

    system("pause");
    return 0;
}