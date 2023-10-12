// Conditionals, Boolean expressions, relational operators

// Description: This C program demonstrates the use of conditionals, Boolean expressions, and relational operators to compare the number of points a user lost with a predefined value (2 points) and provide different output messages based on the comparison results.

// Include necessary libraries: cs50.h for get_int and stdio.h for printf.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for the number of points they lost.
    int points = get_int("How many points did you lose? ");

    // Compare the user's points against a predefined value (2) and provide different output messages based on the comparison results.
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
    else if (points == 2)
    {
        // If the user lost the same number of points as 2, print this message.
        printf("You lost the same number of points as me.\n");
    }
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to demonstrate the use of conditionals, Boolean expressions, and relational operators. The program prompts the user for the number of points they lost and provides different output messages based on the comparison results.

// The #include <cs50.h> and #include <stdio.h> lines include the necessary libraries for using the get_int function and the printf function.

// Inside the main function, the program first prompts the user for the number of points they lost and stores this value in the 'points' variable.

// The program then uses a series of 'if' and 'else if' statements to compare the 'points' variable against the predefined value of 2.

// - If 'points' is less than 2, it prints a message indicating that the user lost fewer points.
// - If 'points' is greater than 2, it prints a message indicating that the user lost more points.
// - If 'points' is equal to 2, it prints a message indicating that the user lost the same number of points as the predefined value.

// This code demonstrates the use of conditionals and relational operators to make decisions and provide different output based on user input. It showcases the flexibility of conditionals in handling multiple cases.
