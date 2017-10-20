#include <stdio.h>
#include <math.h>

unsigned long fatorial(unsigned long n);
unsigned long coeficiente_binomial(int n, int k);

int main() {
    int n, k;    
    scanf("%d", &n);
    scanf("%d", &k);
    printf("%lu", coeficiente_binomial(n, k));
}

unsigned long fatorial(unsigned long n)
{
    unsigned long fat;
    for(fat = 1;n > 1;n--) {
        fat = fat * n;
    }
    return fat;
}

unsigned long coeficiente_binomial(int n, int k)
{
    return fatorial(n) / (fatorial(k) * fatorial(n - k));
}
