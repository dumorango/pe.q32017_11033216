#include <stdio.h>

int main() {
    int i, x;
    double soma = 0;
    for(i = 0;i < 10; i++) {
        scanf("%d", &x);
        soma += x;        
    }    
    printf("soma = %lf\n", soma);
    printf("media = %.1lf", soma/10);
}
