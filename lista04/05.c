#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <math.h>
#include <assert.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{    	
	int bit_sum = 0;
	while(x) {
        bit_sum += x % 2;
		x = x / 2;        
    }	
    return bit_sum;
}

ulint f2 (ulint x)
{    
	int bit_sum = 0;
	while(x) {
        bit_sum += x & 1;
		x = x >> 1;        
    }	
    return bit_sum;
}

void should_sum_bits_of_int() {
    assert(f1(10) == 2);
    assert(f1(1020) == 8);
	assert(f1(666) == 5);
	assert(f2(10) == 2);
    assert(f2(1020) == 8);
	assert(f2(666) == 5);
}


int main ( void ) {

    should_sum_bits_of_int();    

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