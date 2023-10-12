// Addition with long

// Description: This C program prompts the user to enter two long integers, performs addition on them, and prints the result as a long integer.

// Include necessary libraries: cs50.h for get_long and stdio.h for printf.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user to enter the first long integer and store it in the variable 'x'.
    long x = get_long("x: ");

    // Prompt the user to enter the second long integer and store it in the variable 'y'.
    long y = get_long("y: ");

    // Perform addition of 'x' and 'y' and print the result as a long integer.
    printf("%li\n", x + y);
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to prompt the user to enter two long integers, perform addition on them, and print the result as a long integer.

// The #include <cs50.h> and #include <stdio.h> lines include the necessary libraries for using get_long and printf functions.

// Inside the main function, the long x = get_long("x: "); line prompts the user to enter the first long integer and stores it in the variable 'x'.

// The long y = get_long("y: "); line prompts the user to enter the second long integer and stores it in the variable 'y'.

// The program performs addition of 'x' and 'y' using the expression 'x + y' and prints the result as a long integer using printf with the "%li" placeholder.

// This code demonstrates adding two long integers in C, which is suitable for handling large numbers.
