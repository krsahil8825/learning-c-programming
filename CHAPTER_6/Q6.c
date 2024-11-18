#include<stdio.h>

int main(){
    int height;
    int Number;
    printf("This program print right trangle patterns with star\n");

    printf("Enter the Height in number:- ");
    scanf("%d", &height);

    while (height>=1)
    {
        for (int i = 1; i <= height; i++)
        {
            printf("%d", i);
        }
        printf("\n");
        height--;
        
    }
    return 0;
}