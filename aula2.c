#include <stdio.h>

int valida_entrada(int x, int y);
int calcula_mdc(int x, int y);
int simplificar(int x, int y);

int main() {
    int numerador, denominador, i;
    scanf("%d", &numerador);
    scanf("%d", &denominador);  
    /*/ Versão sem função 
    while(denominador != 0) {  
        for( i = denominador; i > 0 ; i-- ) {
            if(numerador % i == 0 && denominador % i == 0) {
                numerador = numerador / i;
                denominador = denominador /i;
            }
        }
        printf("%d/%d", numerador, denominador);
        scanf("%d", &numerador);
        scanf("%d", &denominador);  
    }
    //*/
    // Versão com função
    int divisor_comum;
    while(valida_entrada(numerador, denominador)) {        
        divisor_comum = calcula_mdc(numerador, denominador);
        printf("%d/%d", numerador/divisor_comum, denominador/divisor_comum);
        scanf("%d %d", &numerador, &denominador);
    }
    //*/
    return 0;
}

int valida_entrada(int x, int y)
{ 
    return y != 0;
}

int calcula_mdc(int x, int y)
{
    int r = x % y;
    while(r != 0) {
        y = x;
        x = r;
        r = x % y;
    }
    return x;
}
