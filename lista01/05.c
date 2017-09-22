#include <stdio.h>

int main() {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if(y!=0){
        printf("%d", x / y);
    } else {
        printf("Err: Divisao por 0");
    }
}
