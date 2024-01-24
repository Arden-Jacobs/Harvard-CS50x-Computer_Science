// Include necessary libraries for the program
#include <cs50.h>
#include <stdio.h>

// Main function, entry point of the program
int main(void)
{
    // Declare an array of integers to store scores
    int scores[3];

    // Use a loop to prompt the user for input and populate the array
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Calculate and print the average of the entered scores using an array and a loop
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}
