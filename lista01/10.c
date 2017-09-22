#include <stdio.h>

int main() {
    double temp;
    int opcao;
    scanf("%lf", &temp);
    scanf("%d", &opcao);
    printf("%.2lf", (opcao == 1) ? temp + 273.15 : temp - 273.15);
}
