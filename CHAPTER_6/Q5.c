#include<stdio.h>

int main(){
    int height;
    int Number = 1;
    printf("This program print right trangle patterns with star\n");

    printf("Enter the Height in number:- ");
    scanf("%d", &height);

    while (Number <= height)
    {
        for (int i = 1; i <= Number; i++)
        {
            printf("%d", i);
        }
        printf("\n");
        Number++;
        
    }
    return 0;
}