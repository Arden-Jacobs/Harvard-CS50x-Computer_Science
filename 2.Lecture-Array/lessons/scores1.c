// Include necessary libraries for the program
#include <cs50.h>
#include <stdio.h>

// Main function, entry point of the program
int main(void)
{
    // Declare an array of integers to store scores
    int scores[3];

    // Assign values to individual elements of the array
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    // Print the average of the scores using an array
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}
