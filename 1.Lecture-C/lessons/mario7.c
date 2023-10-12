// Prints an n-by-n grid of bricks, re-prompting the user for a positive integer

// Description: This C program prints an 'n'-by-'n' grid of bricks (represented by hash symbols '#') to the console using nested loops. The user is prompted to enter the size of the grid and is re-prompted until a positive integer is entered.

// Include necessary libraries: cs50.h for get_int and stdio.h for printf.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get the size of the grid from the user, re-prompting until a positive integer is entered.
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

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

// The comments at the top provide a brief description of the program's purpose, which is to print an 'n'-by-'n' grid of bricks (hash symbols '#') to the console using nested loops. The user is prompted to enter the size of the grid and is re-prompted until a positive integer is entered.

// The #include <cs50.h> and #include <stdio.h> lines include the necessary libraries for using get_int and printf functions.

// Inside the main function, the program uses a 'do-while' loop to obtain the size of the grid from the user. The 'do' block ensures that the user is prompted at least once to enter a value for 'n'. The program then checks whether 'n' is less than 1 and continues to re-prompt the user until a positive integer is entered.

// Once a valid 'n' is obtained, the program proceeds to use two nested 'for' loops to create the specified grid.

// The outer 'for' loop (with the variable 'i') iterates 'n' times, creating 'n' rows in the grid.

// Inside the outer loop, there is an inner 'for' loop (with the variable 'j') that also iterates 'n' times for each row, printing a brick (hash symbol '#') on the same line.

// After each row is printed (i.e., the inner loop completes), a newline character ("\n") is added to move to the next row in the grid, ensuring that the bricks are organized in an 'n'-by-'n' grid pattern as specified by the user.

// This code allows for interactive input, ensuring that a positive integer is entered before proceeding to create the grid.
