// Include necessary libraries for the program
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Main function, entry point of the program
int main(void)
{
    // Prompt the user for input, specifically a string
    string s = get_string("Before: ");

    // Print the original string
    printf("After:  ");

    // Use a for loop and create a variable 'n' to remember the string's length, to iterate over each character in the string
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Check if the current character is a lowercase letter
        if (islower(s[i]))
        {
            // If lowercase, convert to uppercase using the ctype library functions and print
            printf("%c", toupper(s[i]));
        }
        else
        {
            // If not lowercase, print the character as it is
            printf("%c", s[i]);
        }
    }

    // Print a newline character to end the output line
    printf("\n");
}
