#include <stdio.h>
#include <math.h>

double calcula_pi_ramanujan(int teto_da_somatoria);
double calcula_somatoria_ramanujan(long k);

double calcula_pi_chudnovski(int teto_da_somatoria);
double calcula_somatoria_chudnovski(int k);

unsigned long fatorial(long x);

int main() {
    printf("%lu\n", fatorial(100));
    printf("%f\n", ( fatorial(4 * 10) * (1103.0 * 26390.0 * 10) ));
    double pi_r = calcula_pi_ramanujan(5);
    double pi_c = calcula_pi_chudnovski(5);
    printf("R: %lf, C: %lf", pi_r, pi_c);
}

double calcula_pi_ramanujan(int teto_da_somatoria)
{
    double RAMANUJAN_CONSTANT = ( 2 * sqrt(2) ) / 9801.0;
    double resultado_somatoria = 0.0;
    for(int i=1; i<=teto_da_somatoria;i++) {
        resultado_somatoria += calcula_somatoria_ramanujan(i);
    }
    printf("Constante: %lf, Somatoria %lf\n", RAMANUJAN_CONSTANT, resultado_somatoria);
    return 1.0/(RAMANUJAN_CONSTANT * resultado_somatoria);
}

double calcula_somatoria_ramanujan(long k) 
{        
    return (
        ( fatorial(4 * k) * (1103.0 * 26390.0 * k) )) / 
        (pow(fatorial(k), 4) * pow(396.0, 4.0 * k))
    ;
}

double calcula_pi_chudnovski(int teto_da_somatoria) 
{
    double CHUDNOVSKI_CONSTANT = 12;
    double resultado_somatoria = 0.0;
    for(int i=1; i<=teto_da_somatoria;i++) {
        resultado_somatoria += calcula_somatoria_chudnovski(i);
    }
    printf("Constante: %lf, Somatoria %lf\n", CHUDNOVSKI_CONSTANT, resultado_somatoria);
    return 1.0/(CHUDNOVSKI_CONSTANT * resultado_somatoria);
}

double calcula_somatoria_chudnovski(int k)
{
    return 
        ( pow(-1, k) * fatorial(6 * k) * (13591409.0 + 545140134.0 * k) ) /
        ( fatorial(3 * k) * pow(fatorial(k), 3) * pow(640320.0, 3.0 * k + 3.0/2.0))
    ;
}

unsigned long fatorial(long n)
{
    unsigned long fat;
    for(fat = 1;n > 1;n--) {
        fat = fat * n;
    }
    return fat;
}