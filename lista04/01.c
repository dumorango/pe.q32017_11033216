#include <stdio.h>
#include <math.h>

typedef struct point {
    float x;
    float y;
    float z;
} point;

float euclidian_distance(point a, point b) 
{
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) + pow(b.z - a.z, 2));
}
int main() {
    point p1, p2;
    scanf("%f , %f , %f" , &(p1.x) , &(p1.y) , &(p1.z));
    scanf("%f , %f , %f" , &(p2.x) , &(p2.y) , &(p2.z));
    printf("%.2f", euclidian_distance(p1, p2));
}