#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, opcao;
    char str[80];
    scanf("%s", str);
    scanf("%d", &opcao);    
    if(opcao == 1) {
        sscanf(str, "%d", &x);
        printf("%X", x);
    } else {
        sscanf(str, "%X", &x);
        printf("%d", x);
    }
}
