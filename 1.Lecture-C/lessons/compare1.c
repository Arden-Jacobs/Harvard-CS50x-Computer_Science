// Conditionals, Boolean expressions, relational operators

// Description: This C program prompts the user to enter two integers 'x' and 'y', compares them using a relational operator, and prints messages based on the comparison, indicating whether 'x' is less than 'y or not.

// Include necessary libraries: cs50.h for get_int and stdio.h for printf.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user to enter the first integer and store it in the variable 'x.'
    int x = get_int("What's x? ");

    // Prompt the user to enter the second integer and store it in the variable 'y.'
    int y = get_int("What's y? ");

    // Compare 'x' and 'y' using the less-than relational operator (<).
    if (x < y)
    {
        // If 'x' is less than 'y', print the message "x is less than y."
        printf("x is less than y\n");
    }
    else
    {
        // If 'x' is not less than 'y', print the message "x is not less than y."
        printf("x is not less than y\n");
    }
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to prompt the user to enter two integers 'x' and 'y', compare them using a relational operator, and print messages based on the comparison, indicating whether 'x' is less than 'y or not.

// The #include <cs50.h> and #include <stdio.h> lines include the necessary libraries for using get_int and printf functions.

// Inside the main function, the int x = get_int("What's x? "); line prompts the user to enter the first integer and stores it in the variable 'x.'

// The int y = get_int("What's y? "); line prompts the user to enter the second integer and stores it in the variable 'y.'

// The program uses the less-than relational operator '<' to compare 'x' and 'y'. If 'x' is less than 'y', it executes the code block within the first if statement, and it prints the message "x is less than y."

// If 'x' is not less than 'y', it executes the code block within the else statement, and it prints the message "x is not less than y."

// This code serves as an example of using conditionals and boolean expressions in C to make decisions based on comparisons.
