// Prints a column of 3 bricks with a loop

// Description: This C program prints a column of 3 bricks (represented by hash symbols '#') to the console using a loop.

// Include the necessary library: stdio.h for printf.
#include <stdio.h>

int main(void)
{
    // Use a 'for' loop to print a brick (hash symbol '#') three times.
    for (int i = 0; i < 3; i++)
    {
        // Inside the loop, print a single brick followed by a newline character to create a column effect.
        printf("#\n");
    }
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to print a column of 3 bricks (hash symbols '#') to the console using a loop.

// The #include <stdio.h> line includes the necessary library for using the printf function.

// Inside the main function, the program uses a 'for' loop to achieve the task.

// The 'for' loop is structured to repeat three times, as indicated by the initialization (int i = 0), condition (i < 3), and update (i++) expressions.

// Inside the loop, the program prints a single brick (hash symbol '#') using printf("#"). The loop will execute this line three times.

// After printing a brick, a newline character ("\n") is printed to move to the next line, ensuring that each brick is printed below the previous one, creating a column effect.

// This code demonstrates the use of a 'for' loop to repeat an action and achieve the result of printing a column of bricks.
