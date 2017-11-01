#include <stdio.h>
#include <math.h>

int fibMem[1000] = {0};

int fib (int n)
{
    if (n == 0) return 0;
    if (n <= 2) return 1;    
    if(fibMem[n] == 0) {
        fibMem[n] = fib(n-1) + fib(n-2);
    }
    return fibMem[n];
}

int tr_fib(int n, int a, int b)
{
    if(n == 0) return a;
    if(n <= 2) return b;
    return tr_fib(n-1, b, a + b);
}

int fat(int n, int f)
{
    if(n==1) return f;
    return fat(n-1, f * n);
}

int inverte(int i)
{    
    int resultado, digito;    
    while(i) {
        resultado *= 10;
        digito =  i - i / 10 * 10;
        i = i / 10;        
        resultado += digito;
        printf("i %d, digito %d\n", i, digito);
    }        
    return resultado;
}

int palindromo(int i)
{
    int inv = inverte(i);
    // printf("i %d inv %d\n", i, inv);
    return inv;
}
int main() {
   // printf("x: %d\n", tr_fib(10, 0, 1));
   //printf("x: %d\n", inverte(123));
   int i = 121;
   int inv = inverte(i);
   printf("i: %d\n", i);
   printf("inv: %d\n", inv);
   printf("inv==i: %d\n", inv == i);
   printf("x: %d\n", palindromo(123));
   //printf("x: %d\n", palindromo(121));
}
