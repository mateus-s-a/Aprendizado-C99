#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main() {
    float raio;
    scanf("%f", &raio);

    printf("%.2f\n", (4.0/3.0) * (round(M_PI * 100) / 100.0) * pow(raio, 3));

    system("pause");
    return 0;
}