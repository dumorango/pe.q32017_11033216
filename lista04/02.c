#include <stdio.h>
#include <math.h>

typedef struct time {
    int minute;
    int second;
    int decisecond;
} time;

time time_difference(time a, time b) 
{
    time c = { .minute = 0, .second = 0, .decisecond = 0 };

    if(a.decisecond < b.decisecond) {
        a.decisecond += 100;
        a.second -= 1;
    }

    c.decisecond = a.decisecond - b.decisecond;

    if(a.second < b.second) {
        a.second += 60;
        a.minute -= 1;
    }

    c.second = a.second - b.second;
    c.minute = a.minute - b.minute;

    return c;
}
int main() {
    time a, b;
    scanf("%dm %ds %d" , &(a.minute) , &(a.second) , &(a.decisecond));
    scanf("%dm %ds %d" , &(b.minute) , &(b.second) , &(b.decisecond)); 
    time c = time_difference(a, b);
    printf("%dm %ds %d" , c.minute , c.second, c.decisecond);
}