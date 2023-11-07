#include<stdio.h>
#include<stdlib.h>
int main(){
    int x = 8;
    int* btr = NULL;
    printf("%p", btr);

    int* ptr = (int*) calloc(10,4);
    int* p = ptr;
    ptr--;
    free(p);
    return 0;
}