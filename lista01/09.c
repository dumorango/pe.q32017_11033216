#include <stdio.h>

int main() {
    double temp;
    int opcao;
    scanf("%lf", &temp);
    scanf("%d", &opcao);
    printf("%.2lf", (opcao == 1) ? (temp * 9.0/5) + 32 : (temp - 32) * 5.0/9);
}
