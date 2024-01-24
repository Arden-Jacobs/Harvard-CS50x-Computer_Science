// Include necessary libraries for the program
#include <cs50.h>
#include <stdio.h>

// Main function, entry point of the program
int main(void)
{
    // Declare an array of strings and initialize its size
    string words[2];

    // Assign values to individual elements of the array
    words[0] = "HI!";
    words[1] = "BYE!";

    // Print the first string from the array
    printf("%s\n", words[0]);

    // Print the second string from the array
    printf("%s\n", words[1]);
}
