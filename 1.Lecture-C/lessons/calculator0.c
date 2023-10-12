// Addition with int, allows for overflow

// Description: This C program prompts the user to enter two integers, performs addition on them, and prints the result as an integer. It does not handle potential overflow issues.

// Include necessary libraries: cs50.h for get_int and stdio.h for printf.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user to enter the first integer and store it in the variable 'x'.
    int x = get_int("x: ");

    // Prompt the user to enter the second integer and store it in the variable 'y'.
    int y = get_int("y: ");

    // Perform addition of 'x' and 'y' and print the result as an integer.
    printf("%i\n", x + y);
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to prompt the user to enter two integers, perform addition on them, and print the result as an integer. It also mentions that the code does not handle potential overflow issues.

// The #include <cs50.h> and #include <stdio.h> lines include the necessary libraries for using get_int and printf functions.

// Inside the main function, the int x = get_int("x: "); line prompts the user to enter the first integer and stores it in the variable 'x'.

// The int y = get_int("y: "); line prompts the user to enter the second integer and stores it in the variable 'y'.

// The program performs addition of 'x' and 'y' using the expression 'x + y' and prints the result as an integer using printf.

// It's important to note that this code does not handle potential overflow issues that may occur when adding very large integers.

// This code serves as a simple example of adding two integers in C.
