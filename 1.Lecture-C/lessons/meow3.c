// Abstraction

// Description: This C program demonstrates the concept of abstraction by defining a function 'meow' to encapsulate the behavior of printing the word "meow" to the console. It then uses this function to print "meow" three times in the main program.

// Include necessary library: stdio.h for printf.
#include <stdio.h>

// Function prototype for 'meow' function.
void meow(void);

int main(void)
{
    // Use a 'for' loop to call the 'meow' function three times.
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}

// Meow once
// Function 'meow' encapsulates the behavior of printing "meow" once.
void meow(void)
{
    // Print "meow" followed by a newline character ("\n").
    printf("meow\n");
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to demonstrate the concept of abstraction. It defines a function 'meow' to encapsulate the behavior of printing "meow" to the console and uses this function to print "meow" three times in the main program.

// The #include <stdio.h> line includes the necessary library for using the printf function.

// The program consists of two main parts: the main function and the 'meow' function.

// The main function uses a 'for' loop to call the 'meow' function three times. This loop demonstrates abstraction by not directly specifying the code to print "meow" but instead calling a function to handle that behavior.

// The 'meow' function encapsulates the behavior of printing "meow" once. This is an example of abstraction, where a specific behavior is encapsulated within a function. The function's name ('meow') and parameters are chosen to make the code more readable and self-explanatory.

// Inside the 'meow' function, the program prints "meow" followed by a newline character ("\n"). This function can be called from various parts of the code to produce the same result, promoting code reuse and maintainability.

// Abstraction simplifies the main program by allowing complex behaviors to be abstracted away into functions, making the code more modular and easier to understand.
