// Include necessary libraries for the program
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Main function, entry point of the program
int main(void)
{
    // Prompt the user for input, specifically a string
    string s = get_string("Input:  ");

    // Print each character of the string one by one using strlen
    printf("Output: ");

    // Use a for loop and creates a varable to remember the string's length, to iterate over each character in the string
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Print the current character
        printf("%c", s[i]);
    }

    // Print a newline character to end the output line
    printf("\n");
}
