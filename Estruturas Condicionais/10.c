#include <stdio.h>

int main() {
    int vt[3];
    scanf("%d %d %d", &vt[0], &vt[1], &vt[2]);

    if(vt[0] == vt[1] && vt[1] == vt[2]) {
        if(vt[0] % 2 == 0) printf("PAR\n");
        else printf("IMPAR\n");
    }
    else printf("%.2f\n", (vt[0] + vt[1] + vt[2]) / 3.0);

    return 0;
}