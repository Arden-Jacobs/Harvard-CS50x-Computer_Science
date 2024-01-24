// Include necessary libraries for the program
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Main function, entry point of the program
int main(void)
{
    // Prompt the user for input, store it in the variable 's'
    string s = get_string("String: ");

    // Iterate over each character in the string 's'
    for (int i = 0; i < strlen(s); i++)
    {
        // Explicitly cast the current character 's[i]' to an integer and store it in 'c'
        int c = (int) s[i];

        // Print the current character and its corresponding ASCII value
        printf("%c %i\n", s[i], c);
    }
}
