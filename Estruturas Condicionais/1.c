#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);

    (a % b == 0) ? printf("Eh divisivel\n") : printf("Nao eh divisivel\n");

    return 0;
}