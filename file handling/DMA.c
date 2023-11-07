#include<stdio.h>
#include<stdlib.h>
int main(){
    int a = sizeof(int);
    printf("%d", a);

    int* ptr = (int*) malloc(10*4);
    ptr++;
    printf("%d", *ptr);

    char* btr = (char*) malloc(10*1);
    printf("%c", *btr);
    return 0;
}