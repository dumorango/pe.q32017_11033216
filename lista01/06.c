#include <stdio.h>

int main() {
    int x, i, res = 1;
    scanf("%d", &x);
    for(i = 1;i <= x; i++) {        
        res *= i;
    }    
    printf("%d", res);
}
