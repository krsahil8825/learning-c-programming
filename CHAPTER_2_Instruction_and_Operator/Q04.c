//  explain steps by step evaluation of 3 * x / y - z + k
//  where x = 2, y = 3, z = 3, k = 1

// answer
// 3 * 2 / 3 - 3 + 1
// 6 / 3 - 3 + 1
// 2 - 3 + 1
// -1 + 1
// 0

// verifying using code

#include <stdio.h>

int main()
{
    printf("This program is used for verification of above question\n");

    // creating variable and calculating value
    int x = 2, y = 3, z = 3, k = 1;
    int calculation = 3 * x / y - z + k;

    // printing calculation value
    printf(" the result is %d", calculation);
    return 0;
}