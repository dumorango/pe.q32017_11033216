#include <stdio.h>

int main() {
    int x, y, i, res = 1;
    scanf("%d", &x);
    scanf("%d", &y);
    for(i = 0;i < y; i++) {        
        res *= x;
    }    
    printf("%d", res);
}
