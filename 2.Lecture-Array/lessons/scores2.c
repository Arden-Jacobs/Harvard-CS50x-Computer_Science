// Include necessary libraries for the program
#include <cs50.h>
#include <stdio.h>

// Main function, entry point of the program
int main(void)
{
    // Declare an array of integers to store scores
    int scores[3];

    // Prompt the user for input to populate the array
    scores[0] = get_int("Score: ");
    scores[1] = get_int("Score: ");
    scores[2] = get_int("Score: ");

    // Print the average of the entered scores
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}
