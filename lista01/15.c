#include <stdio.h>

int main() {
    int i, x;
    scanf("%d", &x);
    printf("%d", 100);
    for (i = 101;i <= x; i++) {        
        if (i % 2 == 0) printf(", %d", i);
    }    
}