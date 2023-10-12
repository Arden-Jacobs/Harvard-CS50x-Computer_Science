// Conditionals, Boolean expressions, relational operators

// Description: This C program prompts the user to enter two integers 'x' and 'y', compares them using relational operators, and prints messages based on the comparison, indicating whether 'x' is less than, greater than, or equal to 'y.'

// Include necessary libraries: cs50.h for get_int and stdio.h for printf.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user to enter the first integer and store it in the variable 'x.'
    int x = get_int("What's x? ");

    // Prompt the user to enter the second integer and store it in the variable 'y.'
    int y = get_int("What's y? ");

    // Compare 'x' and 'y' using relational operators (<, >, and ==).
    if (x < y)
    {
        // If 'x' is less than 'y', print the message "x is less than y."
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        // If 'x' is greater than 'y', print the message "x is greater than y."
        printf("x is greater than y\n");
    }
    else if (x == y)
    {
        // If 'x' is equal to 'y', print the message "x is equal to y."
        printf("x is equal to y\n");
    }
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to prompt the user to enter two integers 'x' and 'y', compare them using relational operators, and print messages based on the comparison, indicating whether 'x' is less than, greater than, or equal to 'y.'

// The #include <cs50.h> and #include <stdio.h> lines include the necessary libraries for using get_int and printf functions.

// Inside the main function, the int x = get_int("What's x? "); line prompts the user to enter the first integer and stores it in the variable 'x.'

// The int y = get_int("What's y? "); line prompts the user to enter the second integer and stores it in the variable 'y.'

// The program uses relational operators (<, >, and ==) to compare 'x' and 'y. Depending on the comparison results, it executes one of the conditional blocks within the if-else if statements and prints corresponding messages.

// If 'x' is less than 'y', it prints "x is less than y."

// If 'x' is greater than 'y', it prints "x is greater than y."

// If 'x' is equal to 'y', it prints "x is equal to y."

// This code serves as an example of using conditionals and relational operators in C to make decisions based on comparisons, including less than, greater than, and equal to comparisons.
