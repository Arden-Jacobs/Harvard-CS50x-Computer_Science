// Prints an n-by-n grid of bricks, re-prompting user for a positive integer

// Description: This C program prints an 'n'-by-'n' grid of bricks (represented by hash symbols '#') to the console using nested loops. The user specifies the size of the grid and is re-prompted until they enter a positive integer.

// Include necessary libraries: cs50.h for get_int and stdio.h for printf.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user to enter the size 'n' for the grid and re-prompt until a positive integer is entered.
    int n = get_int("Size: ");
    while (n < 1)
    {
        n = get_int("Size: ");
    }

    // Use two nested 'for' loops to print an 'n'-by-'n' grid of bricks.
    for (int i = 0; i < n; i++)
    {
        // The outer loop iterates 'n' times, creating 'n' rows in the grid.
        for (int j = 0; j < n; j++)
        {
            // The inner loop iterates 'n' times for each row, printing a brick (hash symbol '#') on the same line.
            printf("#");
        }
        // After each row is printed, a newline character ("\n") is added to move to the next row in the grid.
        printf("\n");
    }
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to print an 'n'-by-'n' grid of bricks (hash symbols '#') to the console using nested loops. The user specifies the size of the grid and is re-prompted until they enter a positive integer.

// The #include <cs50.h> and #include <stdio.h> lines include the necessary libraries for using get_int and printf functions.

// Inside the main function, the program initially prompts the user to enter the size 'n' for the grid using get_int.

// The program then enters a while loop that checks whether 'n' is less than 1. If 'n' is less than 1 (i.e., not a positive integer), the program re-prompts the user until a positive integer is entered.

// Once a valid 'n' is obtained, the program proceeds to use two nested 'for' loops to create the specified grid.

// The outer 'for' loop (with the variable 'i') iterates 'n' times, creating 'n' rows in the grid.

// Inside the outer loop, there is an inner 'for' loop (with the variable 'j') that also iterates 'n' times for each row, printing a brick (hash symbol '#') on the same line.

// After each row is printed (i.e., the inner loop completes), a newline character ("\n") is added to move to the next row in the grid, ensuring that the bricks are organized in an 'n'-by-'n' grid pattern as specified by the user.

// This code allows for interactive input, ensuring that a positive integer is entered before proceeding to create the grid.
