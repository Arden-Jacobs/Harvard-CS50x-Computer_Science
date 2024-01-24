// Include necessary libraries for the program
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Main function, entry point of the program
int main(void)
{
    // Prompt the user for input, specifically a string representing their name
    string name = get_string("Name: ");

    // Use the strlen function from the string.h library to determine the length of the string
    int length = strlen(name);

    // Print the length of the entered string
    printf("%i\n", length);
}
