// Abstraction with parameterization

// Description: This C program demonstrates abstraction with parameterization by defining a function 'meow' that takes an integer 'n' as a parameter. The 'meow' function is used to print the word "meow" to the console a specified number of times (parameterized) in the main program.

// Include necessary library: stdio.h for printf.
#include <stdio.h>

// Function prototype for 'meow' function.
void meow(int n);

int main(void)
{
    // Call the 'meow' function and specify the number of times to print "meow" (in this case, 3 times).
    meow(3);
}

// Meow some number of times
// Function 'meow' encapsulates the behavior of printing "meow" a specified number of times.
void meow(int n)
{
    // Use a 'for' loop to print "meow" 'n' times.
    for (int i = 0; i < n; i++)
    {
        // Print "meow" followed by a newline character ("\n").
        printf("meow\n");
    }
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to demonstrate abstraction with parameterization. It defines a function 'meow' that takes an integer 'n' as a parameter to specify the number of times to print "meow" to the console.

// The #include <stdio.h> line includes the necessary library for using the printf function.

// The program consists of two main parts: the main function and the 'meow' function.

// The main function calls the 'meow' function and specifies the number of times to print "meow" (in this case, 3 times). This demonstrates abstraction with parameterization, as the main program can control the behavior of the 'meow' function by passing an argument.

// The 'meow' function encapsulates the behavior of printing "meow" a specified number of times. This is an example of abstraction with parameterization, where a specific behavior is encapsulated within a function, and the behavior can be parameterized to make the function flexible and reusable.

// Inside the 'meow' function, a 'for' loop is used to print "meow" 'n' times, where 'n' is the parameter passed to the function. This allows the code to be more adaptable and versatile, as the same function can be used to print "meow" different numbers of times based on the parameter value.

// Abstraction with parameterization simplifies the main program by allowing the 'meow' function to be used with different values for 'n', promoting code reusability and customization.
