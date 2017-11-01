#include <stdio.h>
#include <math.h>

typedef struct complexo {
    float img;
    float real;
} complexo;

void print(complexo x)
{
    if (x.img > 0) {
        printf("(%.2f + i%.2f)", x.real, x.img);
    } else if (x.img == 0) {
        printf("(%.2f)", x.real);
    } else if (x.img < 0) {
        printf("(%.2f - i%.2f)", x.real, -x.img);
    }   
}
complexo soma(complexo x, complexo y)
{
    complexo z;
    z.img = x.img + y.img;
    z.real = x.real + y.real;
    return z;
}

int main() {
   complexo x, y;   
   x.real = 1.0;
   x.img = 2.0;
   y.real = 3.0;
   y.img = 4.0;
   print(soma(x, y));
}
