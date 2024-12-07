#include <stdio.h>
#include <math.h>

int main()
{
    int i = 72;
    int *j = &i;
    int **k = &j;
    printf("%p \n", &i);
    printf("%p \n", j);
    printf("%d \n", *j);
    printf("%d \n", *(&i));
    printf("%p \n", &j);
    printf("%p \n", *(&j));
    printf("%p \n", k);
    printf("%p \n", *k);
    printf("%d \n", **k);
    printf("%p \n", &k);
    printf("%p \n", *(&k));
    printf("%p \n", **(&k));
    return 0; 
}
