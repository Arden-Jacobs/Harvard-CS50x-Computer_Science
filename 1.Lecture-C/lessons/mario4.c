// Prints a 3-by-3 grid of bricks with nested loops using a constant

// Description: This C program prints a 3-by-3 grid of bricks (represented by hash symbols '#') to the console using nested loops. It uses a constant 'n' to define the size of the grid.

// Include the necessary library: stdio.h for printf.
#include <stdio.h>

int main(void)
{
    // Define a constant integer 'n' with a value of 3 to specify the size of the grid.
    const int n = 3;

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

// The comments at the top provide a brief description of the program's purpose, which is to print an 'n'-by-'n' grid of bricks (hash symbols '#') to the console using nested loops. It uses a constant 'n' to define the size of the grid.

// The #include <stdio.h> line includes the necessary library for using the printf function.

// Inside the main function, the program defines a constant integer 'n' with a value of 3, which specifies the size of the grid as a 3-by-3 grid.

// The program then uses two nested 'for' loops to achieve the task.

// The outer 'for' loop (with the variable 'i') iterates 'n' times, creating 'n' rows in the grid.

// Inside the outer loop, there is an inner 'for' loop (with the variable 'j') that also iterates 'n' times for each row, printing a brick (hash symbol '#') on the same line.

// After each row is printed (i.e., the inner loop completes), a newline character ("\n") is added to move to the next row in the grid, ensuring that the bricks are organized in a 3-by-3 grid pattern.

// This code demonstrates the use of nested 'for' loops to create a grid of elements, and it introduces a constant 'n' to define the size of the grid, making it more flexible for different grid sizes.
