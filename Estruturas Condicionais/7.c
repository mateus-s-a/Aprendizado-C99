#include <stdio.h>

int main() {
    int vt[3];
    
    for(int i=0; i<3; i++) scanf("%d", &vt[i]);

    for(int i=0; i<3; i++) {
        for(int j=i+1; j<3; j++) {
            if(vt[i] > vt[j]) {
                int temp = vt[i];
                vt[i] = vt[j];
                vt[j] = temp;
            }
        }
    }

    if(vt[0] == vt[1] && vt[1] == vt[2]) printf("Iguais\n");
    else {
        printf("%d %d %d\n", vt[0], vt[1], vt[2]);
    }
    
    return 0;
}