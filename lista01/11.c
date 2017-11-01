#include <stdio.h>
#include <stdlib.h>

int decimal_to_binario(int decimal)
{
    int binario = 0, i = 1;
    while (decimal != 0) {        
        binario += decimal % 2 * i;
        decimal = decimal / 2;
        i*=10;
    }
    return binario;
}

//TODO
int binario_to_decimal(int decimal)
{
    return 0;
}
int main() {
    int x, opcao;
    char str[80];
    scanf("%s", str);
    scanf("%d", &opcao);    
    if(opcao == 1) {
        sscanf(str, "%d", &x);
        printf("%d", decimal_to_binario(x));
    } else {
        sscanf(str, "%d", &x);
        printf("%d", binario_to_decimal(x));
    }
}
