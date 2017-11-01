#include <stdio.h>
#include <stdlib.h>

void print_array(int * array, int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}

void read_array(int * array, int size)
{
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

int cmpfunc (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
 }

float mediana(int * array, int size)
{   
    qsort(array, size, sizeof(int), cmpfunc);
    int n = size - 1;
    if(size % 2 == 1) {
        return array[(n + 1)/2];
    } else {
        return (array[n/2] + array[(n+1)/2]) / 2.0;
    }
}

int main() {

    int size;
    scanf("%d", &size);

    int * array = (int *) malloc( size * sizeof(int));   

    read_array(array, size);

    printf("%.2f", mediana(array, size));
}