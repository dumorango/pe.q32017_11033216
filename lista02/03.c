#include <stdio.h>
#include <math.h>

int main() {
    double a = 1.0, a1, b = 1.0 / sqrt(2.0), t = (1.0 / 4.0), p = 1.0;
    int i = 0, n = 10;
    for(i = 0; i < n; i++) {
        printf("%.10lf\n", t);
        a1 = (a + b) / 2;
        b = sqrt(a * b);
        t = t - p * pow(a - a1, 2);
        p = 2 * p;
        a = a1;
        printf("%.10lf\n", pow(a + b, 2) / (4 * t));
    }
    printf("%.10lf", pow(a + b, 2) / (4 * t));
}
