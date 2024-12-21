// Write a program having a variable ‘a’. Print the address of ‘a’. Pass this variable to
// a function and print its address. Are these addresses same? Why?

// no not same because each variable and pointer has its own address

#include <stdio.h>

void addresschecker(int *c);

int main()
{
    int a = 1;
    int *b = &a; // b is a pointer which pointing to the address of a or holdes the address of a

    printf("The value of a before calling the function of a is %d\n", a);
    printf("The address of a is %p\n", &a);

    printf("The value of a before calling the function of b is %p\n", b);
    printf("The address of a is %p\n", &b);
    printf("The address of a is %d\n", *b);

    addresschecker(b); // we can call function by pointer, by pass the address to function like this

    printf("The value of a after calling the function of a is %d\n", a);

    printf("calling that function again \n");
    addresschecker(&a); // we can call function by variable, by pass the address to function like this

    return 0;
}

void addresschecker(int *c)
{
    printf("The address of c is %p\n", &c);
    // this print the address of c, and c is a pointer it dosnt means that is thosnt have its one address every pointer have own address

    printf("The value of c is %p\n", c); // here %p is used not %d because it pointer variable it stores adress

    printf("The value stored in *c is %d\n", *c); // in this line says that what value is stord at this address that is stored/pointed by *c

    *c = 5; // this will change the value of a because this function is call by refrence
}