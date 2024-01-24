// Include necessary libraries for the program
#include <cs50.h>
#include <stdio.h>

// Main function, entry point of the program, accepts command-line arguments
int main(int argc, string argv[])
{
    // Iterate over each command-line argument
    for (int i = 0; i < argc; i++)
    {
        // Print the current command-line argument
        printf("%s\n", argv[i]);
    }
}
