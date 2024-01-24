// Include necessary libraries for the program
#include <cs50.h>
#include <stdio.h>

// Function prototype for string_length
int string_length(string s);

// Main function, entry point of the program
int main(void)
{
    // Prompt the user for input, specifically a string representing their name
    string name = get_string("Name: ");
    
    // Call the function string_length and store the result in the variable 'length'
    int length = string_length(name);

    // Print the length of the entered string
    printf("%i\n", length);
}

// Function to determine the length of a string
int string_length(string s)
{
    // Count the number of characters in the string until the null terminator '\0' is encountered
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }

    // Return the length of the string
    return n;
}
