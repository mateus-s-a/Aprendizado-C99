#include <stdio.h>

int main() {
    int anos = 0;
    float p1_alt, p2_alt, p1_cresc_anual, p2_cresc_anual;
    scanf("%f %f %f %f", &p1_alt, &p1_cresc_anual, &p2_alt, &p2_cresc_anual);
    
    if(p1_cresc_anual > p2_cresc_anual) {
        while(p1_alt < p2_alt) {
        p1_alt += p1_cresc_anual;
        p2_alt += p2_cresc_anual;
        anos++;
        }
    printf("%d\n", anos);
    }
    else printf("dados invalidos\n");

    return 0;
}