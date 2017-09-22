#include <stdio.h>

int main( )  {
    int x;
    scanf("%d", &x);
    printf("%s", x % 2 == 0 ? "par" : "impar");
}