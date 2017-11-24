#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <math.h>
#include <assert.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{    
	while(x > 2) {
        if(x % 2 != 0) return 0;  
        x = x / 2;     
    }
    return 1;
}

ulint f2 (ulint x)
{    
	while(x > 2) {
        if((x & 1) != 0) return 0;
        x = x >> 1;        
        
    }
    return 1;
}

void should_be_power_of_2() {
    assert(f1(8) == 1);   
    assert(f2(8) == 1);    
}

void should_not_be_power_of_2() {
    assert(f1(17) == 0);
    assert(f2(17) == 0);    
}

int main ( void ) {

    should_be_power_of_2();
    should_not_be_power_of_2();

	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma = 0;
    long n = 10; //BIGNUM;

	tempo_init = clock();
	for ( int i = 0; i < n; i++ ) {
		soma += f1(i);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);

	tempo_init = clock();
	for ( int i = 0; i < n; i++ ) {
		soma += f2(i);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);

	return 0;
}