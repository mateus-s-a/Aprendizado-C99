#include <stdio.h>

int main() {
    int t_invest;
    float val_invest;
    scanf("%d %f", &t_invest, &val_invest);
    
    switch(t_invest) {
        case 1:
            printf("%.2f\n", val_invest * 1.03);
            break;
        case 2:
            printf("%.2f\n", val_invest * 1.04);
            break;
        default:
            printf("Tipo invalido\n");
            break;
    }

    return 0;
}