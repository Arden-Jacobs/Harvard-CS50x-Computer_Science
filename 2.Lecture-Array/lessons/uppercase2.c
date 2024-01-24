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
        // Convert each character to uppercase using the ctype library function and print
        printf("%c", toupper(s[i]));
    }

    // Print a newline character to end the output line
    printf("\n");
}
