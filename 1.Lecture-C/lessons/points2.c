// Constants

// Description: This C program demonstrates the use of constants to make the code more readable and maintainable. It prompts the user for the number of points they lost, compares it against a predefined constant 'MINE' (set to 2 points), and provides clear and concise output messages based on the comparison results.

// Include necessary libraries: cs50.h for get_int and stdio.h for printf.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Define a constant 'MINE' representing the number of points that you lost (set to 2).
    const int MINE = 2;

    // Prompt the user for the number of points they lost.
    int points = get_int("How many points did you lose? ");

    // Compare the user's points against the constant 'MINE' and provide clear and concise output messages.
    if (points < MINE)
    {
        // If the user lost fewer points than the constant 'MINE', print this message.
        printf("You lost fewer points than me.\n");
    }
    else if (points > MINE)
    {
        // If the user lost more points than the constant 'MINE', print this message.
        printf("You lost more points than me.\n");
    }
    else
    {
        // If the user lost the same number of points as the constant 'MINE', print this message.
        printf("You lost the same number of points as me.\n");
    }
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to demonstrate the use of constants to make the code more readable and maintainable. The program prompts the user for the number of points they lost, compares it against a predefined constant 'MINE' (set to 2 points), and provides clear and concise output messages based on the comparison results.

// The #include <cs50.h> and #include <stdio.h> lines include the necessary libraries for using the get_int function and the printf function.

// Inside the main function, the program defines a constant 'MINE' using the 'const' keyword, representing the number of points that you lost. This constant is set to 2, and its purpose is to make the code more self-explanatory and maintainable.

// The program then prompts the user for the number of points they lost and stores this value in the 'points' variable.

// The program uses a 'if-else' statement to compare the 'points' variable against the constant 'MINE'. This approach ensures that the code remains readable and that any changes to the value can be made in one place (the constant 'MINE').

// The 'if-else' structure provides clear and concise output messages for different comparison results:

// - If 'points' is less than 'MINE', it prints a message indicating that the user lost fewer points.
// - If 'points' is greater than 'MINE', it prints a message indicating that the user lost more points.
// - If 'points' is equal to 'MINE', it prints a message indicating that the user lost the same number of points as the constant 'MINE'.

// This code demonstrates good programming practices by using constants to make the code more self-explanatory and maintainable while providing clear and concise output messages.
