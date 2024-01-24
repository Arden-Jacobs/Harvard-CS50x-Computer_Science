// Include necessary libraries for the program
#include <cs50.h>
#include <stdio.h>

// Main function, entry point of the program, accepts command-line arguments
int main(int argc, string argv[])
{
    // Check if the program is provided with exactly two command-line arguments
    if (argc == 2)
    {
        // Print a greeting message using the second command-line argument
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        // Print a default greeting message if the expected argument is not provided
        printf("hello, world\n");
    }
}
