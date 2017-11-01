#include <stdio.h>
#include <math.h>

unsigned int fibonacci(unsigned int n);
unsigned int mdc(unsigned int m, unsigned int n);
unsigned int soma(unsigned int n);
unsigned int somaTR(unsigned int n, unsigned int base);
unsigned int produto(unsigned int n);
unsigned int produtoTR(unsigned int n, unsigned int base);

int main() {
    printf("Fibonacci: %d", fibonacci(10));
    printf("MDC: %d", mdc(15, 12));
    printf("Soma: %d", soma(5));    
    printf("Produtorio: %d", produto(3));
}

unsigned int fibonacci(unsigned int n)
{   
    if (n <= 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

unsigned int mdc(unsigned int m, unsigned int n)
{
    if(n == 0) return m;
    if(m == 0) return n;
    return mdc(n, m % n);
}

unsigned int soma(unsigned int n)
{
    // if(n == 1) return 1;
    // return n + soma(n - 1);
    return somaTR(n, 0);
}

unsigned int somaTR(unsigned int n, unsigned int base)
{
    if(n == 0) return base;
    return somaTR(n - 1, base + n);
}

unsigned int produto(unsigned int n)
{
    return produtoTR(n, 1);
}

unsigned int produtoTR(unsigned int n, unsigned int base)
{
    if(n == 1) return base;
    return produtoTR(n - 1, base * n);
}