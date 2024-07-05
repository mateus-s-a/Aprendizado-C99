#include <stdio.h>
#include <stdlib.h>

int main() {
    float delta_Tempo, vel_Media;
    scanf("%f %f", &delta_Tempo, &vel_Media);

    printf("%.2f km\n", delta_Tempo * vel_Media);

    system("pause");
    return 0;
}