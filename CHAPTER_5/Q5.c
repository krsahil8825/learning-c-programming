// what will the following line produce in a c program:
// if a = 5
// printf("%d %d %d\n", a, ++a, a++);

// answer
// 7 7 5
// this happen because the instruction pass in the compiler
// answer is 7 7 5 . this happen because the instruction pass 
// in gcc compiler is right to left not left to right the 
// output may changed according to compiler 


// answer verification
#include <stdio.h>

int main()
{
    int a = 5;

    printf("%d %d %d\n", a, ++a, a++);
    return 0;
}