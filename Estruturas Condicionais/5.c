#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float exp = (3 * (a + b)) / ((a * c) - c + b);
    float produto = a * b * c;
    
    if(exp > produto) printf("MAIOR\n");
    else if(exp <= produto) printf("MENOR OU IGUAL\n");

    return 0;
}