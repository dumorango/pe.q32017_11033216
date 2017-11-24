#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <math.h>
#include <assert.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x, ulint y)
{    	
	return x > y;
}

ulint f2 (ulint x, ulint y)
{    
	return (((y+((~x)+1)) >> 31) & 1);
}

void should_compare_numbers() {
    assert(f1(1, 10) == 0);
    assert(f1(10, 1) == 1);
	assert(f2(1, 10) == 0);
    assert(f2(10, 1) == 1);
}


int main ( void ) {

    should_compare_numbers();    

	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma = 0;
    long n = 10; //BIGNUM;

	tempo_init = clock();
	for ( int i = 0; i < n; i++ ) {
		soma += f1(i, i);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);

	tempo_init = clock();
	for ( int i = 0; i < n; i++ ) {
		soma += f2(i, i);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);

	return 0;
}