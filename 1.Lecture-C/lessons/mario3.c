// Prints a 3-by-3 grid of bricks with nested loops

// Description: This C program prints a 3-by-3 grid of bricks (represented by hash symbols '#') to the console using nested loops.

// Include the necessary library: stdio.h for printf.
#include <stdio.h>

int main(void)
{
    // Use two nested 'for' loops to print a 3-by-3 grid of bricks.
    for (int i = 0; i < 3; i++)
    {
        // The outer loop iterates three times, creating three rows in the grid.
        for (int j = 0; j < 3; j++)
        {
            // The inner loop iterates three times for each row, printing a brick (hash symbol '#') on the same line.
            printf("#");
        }
        // After each row is printed, a newline character ("\n") is added to move to the next row in the grid.
        printf("\n");
    }
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to print a 3-by-3 grid of bricks (hash symbols '#') to the console using nested loops.

// The #include <stdio.h> line includes the necessary library for using the printf function.

// Inside the main function, the program uses two nested 'for' loops to achieve the task.

// The outer 'for' loop (with the variable 'i') iterates three times, creating three rows in the grid.

// Inside the outer loop, there is an inner 'for' loop (with the variable 'j') that also iterates three times for each row, printing a brick (hash symbol '#') on the same line.

// After each row is printed (i.e., the inner loop completes), a newline character ("\n") is added to move to the next row in the grid, ensuring that the bricks are organized in a 3-by-3 grid pattern.

// This code demonstrates the use of nested 'for' loops to create a grid of elements.
