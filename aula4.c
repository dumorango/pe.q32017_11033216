#include <stdio.h>
#include <math.h>

int produto_interno(int x[], int y[], int n);
float distancia_euclidiana(int x[][2], int n, int i);
float dist_eucli(int x[], int y[], int n);
int length(char s[]);

int main() {
    int arr1[2] = {1, 2};
    int arr2[2] = {3, 4};   
    int x[2][2] = {{1, 1},{2, 2}};
    printf("%d\n", produto_interno(arr1, arr2, 2));
    // printf("%f\n", distancia_euclidiana(x, 2, 1));
    char s[100];
    s[0] = 'O';
    s[1] = 'l';
    s[2] = 'a';
    s[3] = '\0';    
    printf("%s\n", s);    
    printf("%d\n", length(s));
}

int produto_interno(int x[], int y[], int n)
{
    int produto = 0;
    for(int i = 0; i < n; i++) {                    
        produto += x[i] * y[i];
    }
    return produto;
}

float dist_eucli(int x[], int y[], int n)
{
    int i;
    float d = 0.0;
    for (i=0; i < n; i++){
        d += x[i]-y[i] * x[i]-y[i];
    }
    return sqrt(d);
}

float distancia_euclidiana(int x[][2], int n, int i)
{
    float media = 0.0;
    for(int j = 0; j < n ; j++) {        
        media += dist_eucli(x[i], x[j], 2);                    
    }
    return media;
}

int length(char s[]){
    int i = 0;        
    while(s[i] != '\0') {        
        i++;
    }
    return i;
}

