#include <stdio.h>

int main() {
    float v1, v2, v3;
    scanf("%f %f %f", &v1, &v2, &v3);

    printf("%.2f\n", (v1 * 2 + v2 * 5 + v3 * 7) / (2.00 + 5.00 + 7.00));

    return 0;
}