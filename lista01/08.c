#include <stdio.h>

int main() {
    int x, i, res, r0 = 0, r1 = 1;
    scanf("%d", &x);   
    for (i = 0;i <= x; i++) {          
        if(i!=0) printf(", ");    
        if (i==0) {
            printf("%d", r0);
        } else if (i==1) {
            printf("%d", r1);
        } else {        
            res = r0 + r1;
            r0 = r1;
            r1 = res;
            printf("%d", res);
        }        
    }                          
}
