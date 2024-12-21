// write a program to print the following pattern with star which is given below
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

#include <stdio.h>

int main() {
    int length, no_of_spaces, no_of_stars, i, j;

    // Taking input from the user
    printf("Enter The length (enter odd numbers for better output, if you enter even number it add 1 to that number): ");
    scanf("%d", &length);

    // Adjust the length to the next odd number if an even number is given
    if (length % 2 == 0) {
        length += 1;
    }

    no_of_spaces = length / 2;  // Initial number of spaces
    no_of_stars = 1;            // Initial number of stars

    // Loop to print the upper part and middle row
    for (i = 1; i <= length / 2 + 1; i++) {
        // Print spaces
        for (j = 1; j <= no_of_spaces; j++) {
            printf("  ");
        }

        // Print stars
        for (j = 1; j <= no_of_stars; j++) {
            printf("* ");
        }

        // Move to the next line
        printf("\n");

        // Update spaces and stars for the next row
        no_of_spaces--;
        no_of_stars += 2;
    }

    // Loop to print the lower part
    no_of_spaces = 1;        // Reset spaces for the lower part
    no_of_stars = length - 2; // Reset stars for the lower part

    for (i = 1; i <= length / 2; i++) {
        // Print spaces
        for (j = 1; j <= no_of_spaces; j++) {
            printf("  ");
        }

        // Print stars
        for (j = 1; j <= no_of_stars; j++) {
            printf("* ");
        }

        // Move to the next line
        printf("\n");

        // Update spaces and stars for the next row
        no_of_spaces++;
        no_of_stars -= 2;
    }

    return 0;
}
