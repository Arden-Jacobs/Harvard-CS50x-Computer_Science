// Mario's Pyramid

// Description: This C program generates a pyramid pattern of '#' characters based on the user's input for the height. It uses nested loops to print the pyramid with spaces and left-aligned and right-aligned '#' characters to create a visually appealing pyramid structure.

// Include necessary libraries: cs50.h for get_int and stdio.h for printf.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    // Prompt the user for the height of the pyramid, ensuring it's between 1 and 8.
    do {
        height = get_int("Enter the height (1-8): ");
    } while (height < 1 || height > 8);

    // Loop to generate each row of the pyramid
    for (int i = 0; i < height; i++)
    {
        // Print spaces (left-aligned) to create the left indentation of each row.
        for (int space = 0; space < height - 1 - i; space++)
        {
            printf(" ");
        }

        // Print '#' characters (left-aligned) for the left half of the pyramid.
        for (int left = 0; left < i + 1; left++)
        {
            printf("#");
        }

        // Print spaces to separate the two halves of the pyramid.
        printf("  ");

        // Print '#' characters (right-aligned) for the right half of the pyramid.
        for (int right = 0; right < i + 1; right++)
        {
            printf("#");
        }

        // Move to the next line for the next row of the pyramid.
        printf("\n");
    }
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to generate a pyramid pattern of '#' characters based on the user's input for the height. It explains the use of nested loops to create a visually appealing pyramid structure.

// The #include <cs50.h> and #include <stdio.h> lines include the necessary libraries for using the get_int function and the printf function.

// Inside the main function, the program asks the user for the height of the pyramid, ensuring that the input is between 1 and 8.

// The program then uses a loop to generate each row of the pyramid. For each row, it performs the following actions:

// - Prints spaces to create the left indentation of the row (left-aligned spaces).
// - Prints '#' characters for the left half of the pyramid.
// - Prints spaces to separate the two halves of the pyramid.
// - Prints '#' characters for the right half of the pyramid (right-aligned spaces).
// - Moves to the next line for the next row.

// The code produces a visually pleasing pyramid pattern, and the explanation provides an overview of how the program generates the pyramid and ensures the user input is within the required range.
