#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float delta = (b * b) - (4 * a * c);
    float x1 = (-b + sqrt(delta)) / (2 * a);
    float x2 = (-b - sqrt(delta)) / (2 * a);

    printf("%.2f %.2f %.2f\n", delta, x1, x2);

    system("pause");
    return 0;
}