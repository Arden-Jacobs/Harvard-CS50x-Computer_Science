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

    // Print the characters of the first string individually
    printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);

    // Print the characters of the second string individually
    printf("%c%c%c%c\n", words[1][0], words[1][1], words[1][2], words[1][3]);
}
