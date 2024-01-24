// Include necessary libraries for the program
#include <cs50.h>
#include <stdio.h>

// Main function, entry point of the program
int main(void)
{
    // Prompt the user for input, specifically a string representing their name
    string name = get_string("What's your name? ");
    
    // Print a greeting message using the provided name
    printf("hello, %s\n", name);
}
