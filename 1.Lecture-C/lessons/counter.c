// Counting

// Description: This C program demonstrates an infinite counting loop using a while loop. It continuously increments an integer 'i' and updates the value on the same line, creating a counting effect.

// Include necessary libraries: stdbool.h for 'bool' data type and stdio.h for printf.
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    // Initialize an integer 'i' and set it to 0.
    int i = 0;

    // Create an infinite counting loop using a while loop with the condition 'true.'
    while (true)
    {
        // Print the value of 'i' using printf with the carriage return "\r" to update the value on the same line.
        printf("\r%i", i);

        // Increment the value of 'i.'
        i++;
    }
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to create an infinite counting loop using a while loop. It continuously increments an integer 'i' and updates the value on the same line, creating a counting effect.

// The #include <stdbool.h> and #include <stdio.h> lines include the necessary libraries for using the 'bool' data type and printf function.

// Inside the main function, the integer 'i' is initialized and set to 0, serving as the counter for the loop.

// The program then enters a while loop with the condition 'true,' creating an infinite loop.

// Within the loop, it uses printf with the carriage return "\r" to update and print the value of 'i' on the same line. This creates the effect of counting without scrolling on new lines.

// After printing 'i,' it increments the value of 'i' by 1 with 'i++,' and the loop continues.

// This code serves as an example of an infinite counting loop, demonstrating the usage of a while loop and updating the value on the same line.
