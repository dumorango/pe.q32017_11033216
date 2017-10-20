#include <stdio.h>
#include <math.h>

int main() {
    int op, x, y;
    scanf("%d", &op);
    scanf("%d", &x);
    scanf("%d", &y);
    switch(op) {
        case 1:
            printf("%d", x + y);
            break;      
        case 2:
            printf("%d", x - y);
            break; 
        case 3:
            printf("%d", x * y);
            break;                   
        case 4:
            printf("%d", x / y);
            break;       
        case 5:
            printf("%.0lf", pow(x, y));
            break;               
    }    
}
