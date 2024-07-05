#include <stdio.h>

int main() {
    int n1, n2, mmc = 1;
    scanf("%d %d", &n1, &n2);

    for(int i=2; n1 != 1 || n2 != 1; ) {
        if(n1 % i == 0 || n2 % i == 0) {
            if(n1 % i == 0) n1 = n1 / i;
            if(n2 % i == 0) n2 = n2 / i;
            mmc *= i;
        } else i++;
    }

    printf("%d\n", mmc);

    return 0;
}