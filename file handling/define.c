#include<stdio.h>
#define PI 3.14159265359
#define area(r) (PI*r*r)
//float area(float r){
   // return PI*r*r;
//}
int main(){
    printf("%.11f\n", PI);
    printf("%f", area(6));
    return 0;
}