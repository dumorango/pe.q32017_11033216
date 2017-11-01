#include <stdio.h>
#include <stdlib.h>

void read_array(int * array, int size)
{
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

void print_array(int * array, int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void print_repetition(int * array, int * repetition, int size)
{
    for (int i = 0; i < size; i++) {        
        if(repetition[i]>1) printf("%d-%d ", array[i], repetition[i]);
    }
}

void calculate_repetition(int * array, int * repetition, int size)
{            
    for (int i = 0; i < size; i++) {                
        repetition[i] = 1;
        for(int j = i + 1; j < size; j++) {
            if(array[i] == array[j] && array[i]!=0 ) {                
                repetition[i]++;
                array[j] = 0;                
            }
        }
    }        
}

int main() {

    int size;
    scanf("%d", &size);

    int * array = (int *) malloc( size * sizeof(int));   

    read_array(array, size);

    int * repetition = (int *) malloc( size * sizeof(int));    

    calculate_repetition(array, repetition, size);
    print_repetition(array, repetition, size); 
}