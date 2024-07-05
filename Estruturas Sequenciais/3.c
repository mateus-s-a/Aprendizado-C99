#include <stdio.h>
#include <stdlib.h>

int main() {
    float x;
    scanf("%f", &x);

    printf("%.2f\n", (x + 4) * (x - 6));

    system("pause");
    return 0;
}