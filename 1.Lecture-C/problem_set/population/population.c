// Population Growth

// Description: This C program calculates the number of years it takes for a population to reach or exceed a target size. It prompts the user for the starting population size and the target population size, then uses a loop to simulate population growth and increment the year count until the target size is reached or exceeded.

// Include necessary libraries: cs50.h for get_int and stdio.h for printf.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start_size;
    // Prompt for the starting population size, ensuring it's greater than or equal to 9.
    do {
        start_size = get_int("Enter the starting population size (must be 9 or more): ");
    } while (start_size < 9);

    int end_size;
    // Prompt for the target population size.
    do {
        end_size = get_int("Enter the target population size: ");
    } while (end_size < start_size);

    // Initialize the year count to 0.
    int year = 0;

    // Check if the starting and target sizes are not equal.
    if (start_size != end_size)
    {
        // Loop to simulate population growth and increment the year count until the target size is reached or exceeded.
        for (; start_size < end_size;)
        {
            // Calculate the new population size based on annual growth and reduction (1/3 reduction and 1/4 growth).
            start_size = start_size + (start_size / 3) - (start_size / 4);

            // Increment the year count.
            year++;
        }
    }

    // Print the number of years it takes to reach or exceed the target population size.
    printf("Years: %d\n", year);
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to calculate the number of years it takes for a population to reach or exceed a target size. The program prompts the user for the starting population size and the target population size, then uses a loop to simulate population growth and increments the year count until the target size is reached or exceeded.

// The #include <cs50.h> and #include <stdio.h> lines include the necessary libraries for using the get_int function and the printf function.

// Inside the main function, the program asks the user for the starting population size, ensuring it's greater than or equal to 9. It also prompts for the target population size, ensuring it's greater than or equal to the starting size.

// The program initializes the year count to 0 and checks if the starting and target sizes are not equal.

// If they are not equal, the program enters a loop to simulate population growth. It calculates the new population size in each iteration based on annual growth and reduction (1/3 reduction and 1/4 growth) and increments the year count accordingly.

// Finally, the program prints the number of years it takes to reach or exceed the target population size.

// The code effectively calculates population growth and provides the number of years needed to reach the target population size. The explanation gives an overview of the program's functionality.
