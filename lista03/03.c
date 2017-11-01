#include <stdio.h>
#include <string.h>

int * soma_array(int * array1, int * array2, int size)
{       
    for (int i = 0; i < size; i++) {
        array1[i] = array1[i] + array2[i];
    }
    return array1;
}

void print_array(int * array){
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
}

void read_array(int * array, int size)
{
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

int main() {
    int array1[255];    
    read_array(array1, 5);
    int array2[255];    
    read_array(array2, 5);
    print_array(soma_array(array1, array2, 5));
}