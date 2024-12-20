#include<stdio.h>

void addresschecker(int *b);

int main(){
    int a = 1;
    int *b = &a;
    printf("The address of a is %p\n", &a);
    addresschecker(b);
    return 0;
}

void addresschecker(int *b)
{
    printf("The address of b is %p\n", b);
    printf("The address of b is %d\n", *b);
}