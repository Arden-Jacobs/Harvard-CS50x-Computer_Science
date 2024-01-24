// Include necessary libraries for the program
#include <cs50.h>
#include <stdio.h>

// Main function, entry point of the program, accepts command-line arguments
int main(int argc, string argv[])
{
    // Check if the program is provided with exactly two command-line arguments
    if (argc != 2)
    {
        // Print an error message and return a non-zero value indicating an issue
        printf("Missing command-line argument\n");
        return 1;
    }

    // Print a greeting message using the provided command-line argument
    printf("hello, %s\n", argv[1]);

    // Return zero to indicate successful execution
    return 0;
}
