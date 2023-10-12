// Design

// Description: This C program demonstrates good design practices by prompting the user for the number of points they lost and providing clear and concise output messages based on the comparison results. It uses a well-structured 'if-else' statement to handle all cases, including the case where the user lost the same number of points as a predefined value (2 points).

// Include necessary libraries: cs50.h for get_int and stdio.h for printf.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for the number of points they lost.
    int points = get_int("How many points did you lose? ");

    // Compare the user's points against a predefined value (2) and provide clear and concise output messages.
    if (points < 2)
    {
        // If the user lost fewer points than 2, print this message.
        printf("You lost fewer points than me.\n");
    }
    else if (points > 2)
    {
        // If the user lost more points than 2, print this message.
        printf("You lost more points than me.\n");
    }
    else
    {
        // If the user lost the same number of points as 2, print this message.
        printf("You lost the same number of points as me.\n");
    }
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to demonstrate good design practices. The program prompts the user for the number of points they lost and provides clear and concise output messages based on the comparison results. It also highlights the use of a well-structured 'if-else' statement to handle all cases, promoting readability.

// The #include <cs50.h> and #include <stdio.h> lines include the necessary libraries for using the get_int function and the printf function.

// Inside the main function, the program first prompts the user for the number of points they lost and stores this value in the 'points' variable.

// The program then uses a 'if-else' statement to compare the 'points' variable against the predefined value of 2. This 'if-else' structure is well-organized and handles all possible cases:

// - If 'points' is less than 2, it prints a message indicating that the user lost fewer points.
// - If 'points' is greater than 2, it prints a message indicating that the user lost more points.
// - If 'points' is equal to 2, it prints a message indicating that the user lost the same number of points as the predefined value.

// This code demonstrates good design by providing clear and concise output messages and structuring the decision-making logic in a readable and maintainable way. It ensures that all possible cases are handled, including the equality case.
