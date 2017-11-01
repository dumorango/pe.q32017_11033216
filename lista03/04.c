#include <stdio.h>
#include <string.h>

int * soma_array(int * array1, int * array2, int size)
{       
    for (int i = 0; i < size; i++) {
        array1[i] = array1[i] + array2[i];
    }
    return array1;
}

void print_matrix(int matrix[3][3], int size) 
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        } 
        printf("\n");
    } 
}

void swap(int matrix[3][3], int i, int j)
{
    int temp = matrix[j][i];
    matrix[j][i] = matrix[i][j];
    matrix[i][j] = temp;
}

void transpose(int matrix[3][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) {
            swap(matrix, i, j);
        }         
    } 
}

void read_matrix(int matrix[3][3], int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {            
            scanf("%d", &matrix[i][j]);                 
        } 
    }      
}

int main() {
    int matrix1[3][3];    
    read_matrix(matrix1, 3);    
    transpose(matrix1, 3);
    print_matrix(matrix1, 3);
}