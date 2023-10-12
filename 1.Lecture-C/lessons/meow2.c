// Better design

// Description: This C program prints the word "meow" to the console three times in a more efficient and concise manner by using a 'for' loop.

// Include necessary library: stdio.h for printf.
#include <stdio.h>

int main(void)
{
    // Use a 'for' loop to print "meow" three times.
    for (int i = 0; i < 3; i++)
    {
        // Print "meow" followed by a newline character ("\n").
        printf("meow\n");
    }
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to print the word "meow" to the console three times. It also highlights that the code demonstrates better design by using a 'for' loop.

// The #include <stdio.h> line includes the necessary library for using the printf function.

// Inside the main function, the program follows an improved design by using a 'for' loop.

// The 'for' loop iterates with the loop variable 'i' starting at 0 and continuing as long as 'i' is less than 3. This loop allows the program to print "meow" three times, making the code more concise and maintainable.

// Within the loop, the program prints "meow" followed by a newline character ("\n"). The 'i' variable is automatically incremented as part of the loop, which eliminates the need for an explicit counter increment.

// This design is a more efficient and concise way to achieve the desired output, and it allows for easy adjustment of the number of repetitions by modifying the loop control conditions.
