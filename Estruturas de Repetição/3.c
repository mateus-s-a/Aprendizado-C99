#include <stdio.h>

int main() {
    for(int i=0; i<=100; i++) printf("%d C = %.2f F\n", i, (i * 1.8) + 32);

    return 0;
}