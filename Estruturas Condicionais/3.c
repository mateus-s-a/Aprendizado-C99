#include <stdio.h>

int main() {
    float n1, n2;
    char op;
    scanf("%f %c %f", &n1, &op, &n2);

    if(op == '+' || op == '-' || op == '*' || op == '/') {
        if(op == '/' && n2 == 0) {
            printf("Divisao por zero\n");
        } else {
            switch(op) {
                case '+':
                    printf("%.2f\n", n1 + n2);
                    break;
                case '-':
                    printf("%.2f\n", n1 - n2);
                    break;
                case '*':
                    printf("%.2f\n", n1 * n2);
                    break;
                case '/':
                    printf("%.2f\n", n1 / n2);
                    break;
            }
        }
    } else {
        printf("Operacao Invalida\n");
    }
    

    return 0;
}