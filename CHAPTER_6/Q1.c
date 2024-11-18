#include<stdio.h>

int main(){

    int length, breadth;
    printf("This program print rectangular patterns with star\n");

    printf("Enter the Length in number:- ");
    scanf("%d", &length);
    printf("Enter the Breadth in number:- ");
    scanf("%d", &breadth);

    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= breadth; j++)
        {
            printf("*");
        }
    printf("\n");
    }
    
    return 0;
}