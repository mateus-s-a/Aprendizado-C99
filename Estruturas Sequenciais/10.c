#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a;
    scanf("%f", &a);

    printf("%.2f\n", pow(a, 3));

    system("pause");
    return 0;
}