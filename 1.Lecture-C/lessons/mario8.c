// Prints an n-by-n grid of bricks, re-prompting the user for a positive integer

// Description: This C program prints an 'n'-by-'n' grid of bricks (represented by hash symbols '#') to the console using functions and nested loops. The user is prompted to enter the size of the grid and is re-prompted until a positive integer is entered.

// Include necessary libraries: cs50.h for get_int and stdio.h for printf.
#include <cs50.h>
#include <stdio.h>

// Function prototypes
int get_size(void);
void print_grid(int n);

int main(void)
{
    // Get the size of the grid using the get_size function and print the grid with the specified size.
    int n = get_size();
    print_grid(n);
}

// Function to get the size of the grid, re-prompting until a positive integer is entered.
int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

// Function to print the grid of bricks with a specified size 'n'.
void print_grid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Print a brick (hash symbol '#') for each element in the grid.
            printf("#");
        }
        // After each row is printed, add a newline character ("\n") to move to the next row in the grid.
        printf("\n");
    }
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to print an 'n'-by-'n' grid of bricks (hash symbols '#') to the console using functions and nested loops. The user is prompted to enter the size of the grid and is re-prompted until a positive integer is entered.

// The #include <cs50.h> and #include <stdio.h> lines include the necessary libraries for using get_int and printf functions.

// The program is organized into three main parts: the main function, a function to get the size of the grid (get_size), and a function to print the grid (print_grid).

// The main function calls the get_size function to obtain the size of the grid and then calls the print_grid function to print the grid with the specified size.

// The get_size function is responsible for prompting the user to enter the size of the grid and continues to re-prompt until a positive integer is entered. It returns the valid size.

// The print_grid function takes the size 'n' as a parameter and uses two nested 'for' loops to create the specified grid. It prints a brick (hash symbol '#') for each element in the grid and adds a newline character ("\n") after each row to organize the bricks in an 'n'-by-'n' grid pattern.

// This code demonstrates the use of functions to modularize the program and ensure reusability of code. It also ensures that the user enters a positive integer as the size of the grid.
