// Include necessary libraries for the program
#include <cs50.h>
#include <stdio.h>

// Function prototype for get_negative_int
int get_negative_int(void);

// Main function, entry point of the program
int main(void)
{
    // Call the function get_negative_int and store the result in variable 'i'
    int i = get_negative_int();
    
    // Print the obtained negative integer
    printf("%i\n", i);
}

// Function to prompt the user for a negative integer
// But It Prompts the user for Positive integer
int get_negative_int(void)
{
    int n;
    
    // Repeat the following block until a non-negative integer is provided
    do
    {
        // Prompt the user for input and store it in variable 'n'
        n = get_int("Negative Integer: ");
    }
    while (n < 0); // Continue looping until a negative integer is provided
    
    // Return the obtained negative integer
    return n;
}
