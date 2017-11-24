#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void populate_random_array(int * array, int n) 
{
    for(int i = 0; i < n; i++) {
        array[i] = rand();
    }
}

void populate_ascendent_array(int * array, int n) 
{
    for(int i = 0; i < n; i++) {
        array[i] = i + 1;
    }
}

void populate_descendent_array(int * array, int n) 
{
    for(int i = n; i > 0; i--) {
        array[i] = i;
    }
}

void print_array(int * array, int n) 
{
    printf("[");
    for(int i = 0; i < n; i++) {
        printf("%d", array[i]);
        if(i!=n-1) printf(", ");
    }
    printf("]\n");
}

void swap(int * array, int i, int j) {
    int temp = array[j];
    array[j] = array[i];
    array[i] = temp;
}

void bubble_sort(int * array, int n, int _) 
{
    for(int i = 0; i < n; i++) {
        int has_swapped = 0;
        for(int j = 0; j < n - 1 - i; j++) {
            if(array[j] > array[j + 1]) {
                swap(array, j, j + 1);
                has_swapped = 1;
            }
        }
        if(!has_swapped) return;
    }
}

void insertion_sort(int * array, int n, int _) 
{
    for(int i = 1; i < n; i++) {        
        for(int j = i; j > 0 && array[j-1] > array[j]; j--) {            
                swap(array, j - 1, j);                
        }
    }            
}

int partition (int * v, int low, int high)
{
    int pivot = v[high-low/2];
    int j, i = low;
    for (j=low; j<high; j++) {
        if (v[j] <= pivot) {
            swap(v, i, j);
            i++;
        }
    }
    swap(v, i, high);
    return i;
}

void quicksort (int * v, int low, int high)
{
    int p;
    if (low < high) {
        p = partition(v, low, high);
        quicksort(v, low, p-1);
        quicksort(v, p+1, high);
    }
}

// Measure the time to execute a function
long time_function(void (*f)(int * array, int low, int high), int * array, int low, int high) 
{
    clock_t start_time, end_time;
    start_time = clock();    
    f(array, low, high);
    end_time = clock();    
    return (long) (end_time - start_time) / CLOCKS_PER_SEC;
}

int main() {
    int n = 10000;
    int * array = (int *) malloc( sizeof(int) * n );    
    
    clock_t start_time, end_time;
    
    // Bubble Sort Random
    populate_random_array(array, n);  
    printf("Bubble Sort Random : %ld ms\n", time_function(bubble_sort, array, n, 0));    

    // Bubble Sort Ascendent
    populate_ascendent_array(array, n);    
    printf("Bubble Sort Ascendent : %ld ms\n", time_function(bubble_sort, array, n, 0));  

    // Bubble Sort Descendent
    populate_descendent_array(array, n);    
    printf("Bubble Sort Descendent : %ld ms\n", time_function(bubble_sort, array, n, 0)); 

     // Insertion Sort Random
    populate_random_array(array, n);  
    printf("Insertion Sort Random : %ld ms\n", time_function(insertion_sort, array, n, 0));    

    // Insertion Sort Ascendent
    populate_ascendent_array(array, n);    
    printf("Insertion Sort Ascendent : %ld ms\n", time_function(insertion_sort, array, n, 0));  

    // Insertion Sort Descendent
    populate_descendent_array(array, n);    
    printf("Insertion Sort Descendent : %ld ms\n", time_function(insertion_sort, array, n, 0)); 

     // Quick Sort Random
    populate_random_array(array, n);  
    printf("Quick Sort Random : %ld ms\n", time_function(quicksort, array, 0, n));    

    // Quick Sort Ascendent
    populate_ascendent_array(array, n);    
    printf("Quick Sort Ascendent : %ld ms\n", time_function(quicksort, array, 0, n));  

    // Quick Sort Descendent
    populate_descendent_array(array, n);    
    printf("Quick Sort Descendent : %ld ms\n", time_function(quicksort, array, 0, n)); 
}