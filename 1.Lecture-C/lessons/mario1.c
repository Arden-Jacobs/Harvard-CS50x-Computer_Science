// Prints a row of 4 question marks with a loop

// Description: This C program prints a row of 4 question marks to the console using a loop.

// Include the necessary library: stdio.h for printf.
#include <stdio.h>

int main(void)
{
    // Use a 'for' loop to print a question mark four times.
    for (int i = 0; i < 4; i++)
    {
        // Inside the loop, print a single question mark.
        printf("?");
    }

    // After the loop, add a newline character to move to the next line.
    printf("\n");
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to print a row of 4 question marks to the console using a loop.

// The #include <stdio.h> line includes the necessary library for using the printf function.

// Inside the main function, the program uses a 'for' loop to achieve the task.

// The 'for' loop is structured to repeat four times, as indicated by the initialization (int i = 0), condition (i < 4), and update (i++) expressions.

// Inside the loop, the program prints a single question mark using printf("?"). The loop will execute this line four times.

// After the loop, a newline character ("\n") is printed to move to the next line, ensuring that the row of question marks is followed by a line break.

// This code demonstrates the use of a 'for' loop to repeat an action and achieve the same result as the previous example with fewer lines of code.
