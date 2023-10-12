// Prints an n-by-n grid of bricks with nested loops

// Description: This C program prints an 'n'-by-'n' grid of bricks (represented by hash symbols '#') to the console using nested loops. The user specifies the size of the grid.

// Include necessary libraries: cs50.h for get_int and stdio.h for printf.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user to enter the size 'n' for the grid.
    int n = get_int("Size: ");

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

// The comments at the top provide a brief description of the program's purpose, which is to print an 'n'-by-'n' grid of bricks (hash symbols '#') to the console using nested loops. The user specifies the size of the grid.

// The #include <cs50.h> and #include <stdio.h> lines include the necessary libraries for using get_int and printf functions.

// Inside the main function, the program prompts the user to enter the size 'n' for the grid using get_int.

// The program then uses two nested 'for' loops to achieve the task.

// The outer 'for' loop (with the variable 'i') iterates 'n' times, creating 'n' rows in the grid based on the user's input.

// Inside the outer loop, there is an inner 'for' loop (with the variable 'j') that also iterates 'n' times for each row, printing a brick (hash symbol '#') on the same line.

// After each row is printed (i.e., the inner loop completes), a newline character ("\n") is added to move to the next row in the grid, ensuring that the bricks are organized in an 'n'-by-'n' grid pattern as specified by the user.

// This code demonstrates the use of nested 'for' loops to create a grid of elements, and it allows the user to specify the size of the grid interactively.
