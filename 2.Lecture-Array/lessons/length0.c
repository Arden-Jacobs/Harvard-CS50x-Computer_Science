// Include necessary libraries for the program
#include <cs50.h>
#include <stdio.h>

// Main function, entry point of the program
int main(void)
{
    // Prompt the user for input, specifically a string representing their name
    string name = get_string("Name: ");

    // Count the number of characters in the string until the null terminator '\0' is encountered
    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }

    // Print the length of the string
    printf("%i\n", n);
}
