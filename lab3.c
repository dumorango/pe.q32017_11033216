#include <stdio.h>
#include <math.h>

unsigned int soma(unsigned int n);
unsigned int somaTR(unsigned int n, unsigned int base);
unsigned int digitos(unsigned int n);
unsigned int digitos_caldal(unsigned int n);
unsigned int digitosTR(unsigned int n, unsigned int base);
unsigned int soma_digitos(unsigned int n);
unsigned int soma_digitosTR(unsigned int n, unsigned int base);
unsigned int mdc(unsigned int m, unsigned int n);
unsigned int eprimo_aux(unsigned int x, unsigned int i);
unsigned int eprimo(unsigned int x);
unsigned int eprimo_iter(unsigned int x);

int main() {
    printf("Soma: %d\n", soma(5));
    printf("Digitos: %d\n", digitos(999999999));
    printf("Digitos: %d\n", digitos_caldal(999999999));
    printf("Soma Digitos: %d\n", soma_digitos(999));
    printf("Primo: %d Nao Primo: %d\n", eprimo_iter(109), eprimo_iter(110));
    printf("Primo: %d Nao Primo: %d\n", eprimo(109), eprimo(110));
}

unsigned int soma(unsigned int n)
{
    return somaTR(n, 0);
}

unsigned int somaTR(unsigned int n, unsigned int base)
{
    if(n == 0) return base;
    return somaTR(n - 1, base + n);
}

unsigned int digitos(unsigned int x)
{
    if(x<10) return 1;
    return 1 + digitos(x/10);
}

unsigned int digitos_caldal(unsigned int x)
{
    return digitosTR(x, 1);
}


unsigned int digitosTR(unsigned int x, unsigned int base)
{
    if(x<10) return base;
    return digitosTR(x/10, base + 1);
}

unsigned int soma_digitos(unsigned int x)
{
    return soma_digitosTR(x, 0);
}


unsigned int soma_digitosTR(unsigned int x, unsigned int base)
{    
    if(x<10) return base + x;
    return soma_digitosTR(x/10, x%10 + base);
}

unsigned int mdc(unsigned int m, unsigned int n)
{
    if(n == 0) return m;
    if(m == 0) return n;
    return mdc(n, m % n);
}

unsigned int eprimo_iter(unsigned int n)
{
    /* n é o número e i é a variável auxiliar */    
    unsigned int i;    
    for (i=3; i<n; i++) {        
        if (n % i == 0) return 0; /* não é primo */
    }
    return 1; /* é primo */
}

unsigned int eprimo_aux(unsigned int x, unsigned int i)
{
    if(x == i) return 1;
    if(x % i == 0) return 0;
    return eprimo_aux(x, i + 1);
}

unsigned int eprimo(unsigned int x)
{
    if(x <= 2) return 1;
    return eprimo_aux(x, 3);
}


