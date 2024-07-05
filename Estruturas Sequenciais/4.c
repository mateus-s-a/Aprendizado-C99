#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float cateto_Oposto, cateto_Adjacente;
    scanf("%f %f", &cateto_Oposto, &cateto_Adjacente);

    printf("%.2f\n", sqrt((cateto_Oposto * cateto_Oposto) + (cateto_Adjacente * cateto_Adjacente)));
    
    system("pause");
    return 0;
}