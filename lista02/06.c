#include <stdio.h>
#include <math.h>

double raiz_de_delta(double a, double b, double c);
void bhaskara(double a, double b, double c);

unsigned long coeficiente_binomial(int n, int k);

int main() {
    double a, b, c;    
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    bhaskara(a, b, c);
}

double raiz_de_delta(double a, double b, double c)
{
    return sqrt(pow(b, 2) - 4 * a * c);
}

void bhaskara(double a, double b, double c)
{   
    double x1, x2, d;    
    d = raiz_de_delta(a, b, c);
    x1 = (-1 * b + d ) / (2 * a);
    x2 = (-1 * b - d ) / (2 * a);
    printf("%.2lf %.2lf", x1, x2);
}
