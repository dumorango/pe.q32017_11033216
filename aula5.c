#include <stdio.h>
#include <math.h>

void troca(int * px, int * py);
int quociente_resto(int x, int y, int * q, int * r);
void copy(int * from, int * to, int n);

int main() {
   int x = 1, y = 2;
   troca(&x, &y);
   printf("x: %d y: %d\n", x, y);

   int numerador = 13, numerando = 4, q, r;
   quociente_resto(numerador, numerando, &q, &r);
   printf("numerador:%d numerando:%d q: %d r: %d\n", numerador, numerando, q, r);

   int from[3] = { 0, 1, 2 };
   int to[3];
   copy(from, to, 3);
   printf("[%d, %d, %d]\n", to[0], to[1], to[2]);
   
}

void troca(int * px, int * py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;        
}

int quociente_resto(int x, int y, int * q, int * r)
{    
    if(y == 0) return 0;
    *q = x / y;
    *r = x % y;    
    return 1;
}

void copy(int * from, int * to, int n)
{
    // for(int i = 0; i < n; i++) {
    //     to[i] = from[i];
    // }    
    while(n--) *to++ = *from++;        
}


