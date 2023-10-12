// Better design

// Description: This C program prints the word "meow" to the console three times in a more efficient and concise manner by using a loop.

// Include necessary library: stdio.h for printf.
#include <stdio.h>

int main(void)
{
    // Initialize a counter variable 'i' to keep track of the number of times "meow" is printed.
    int i = 0;

    // Use a 'while' loop to print "meow" three times.
    while (i < 3)
    {
        // Print "meow" followed by a newline character ("\n").
        printf("meow\n");

        // Increment the counter variable 'i' to keep track of the number of prints.
        i++;
    }
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to print the word "meow" to the console three times. It also highlights that the code demonstrates better design by using a loop.

// The #include <stdio.h> line includes the necessary library for using the printf function.

// Inside the main function, the program follows an improved design by initializing a counter variable 'i' to keep track of the number of times "meow" is printed.

// It then uses a 'while' loop that runs as long as the value of 'i' is less than 3. This loop allows the program to print "meow" three times.

// Within the loop, the program prints "meow" followed by a newline character ("\n") and increments the counter variable 'i' to keep track of the number of prints.

// This design is more efficient and concise than the previous code, which involved repeating separate printf statements. With this design, you can easily adjust the number of repetitions by changing the loop condition, making the code more flexible and maintainable.
