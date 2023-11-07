#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(){
    float x = sqrt(4);
    printf("%f\n", x);
    float y = cbrt(8);
    printf("%f\n", y);
    int a = __INT_MAX__;
    long s = LONG_MAX;
    printf("%ld", s);
    return 0;
}