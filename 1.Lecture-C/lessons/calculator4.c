// Division with longs, demonstrating type casting

// Description: This C program prompts the user to enter two long integers, divides 'x' by 'y', and assigns the result to a float variable 'z'. It uses explicit type casting to ensure the division is performed as floating-point division, and then prints 'z' as a floating-point number.

// Include necessary libraries: cs50.h for get_long and stdio.h for printf.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user to enter the first long integer and store it in the variable 'x'.
    long x = get_long("x: ");

    // Prompt the user to enter the second long integer and store it in the variable 'y'.
    long y = get_long("y: ");

    // Divide 'x' by 'y' with explicit type casting to float and store the result in the float variable 'z'.
    float z = (float) x / (float) y;

    // Print 'z' as a floating-point number.
    printf("%f\n", z);
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to prompt the user to enter two long integers, divide 'x' by 'y,' assign the result to a float variable 'z,' and print 'z' as a floating-point number. It also mentions that the code demonstrates type casting to ensure floating-point division.

// The #include <cs50.h> and #include <stdio.h> lines include the necessary libraries for using get_long and printf functions.

// Inside the main function, the long x = get_long("x: "); line prompts the user to enter the first long integer and stores it in the variable 'x.'

// The long y = get_long("y: "); line prompts the user to enter the second long integer and stores it in the variable 'y.'

// The program divides 'x' by 'y' with explicit type casting to float, which ensures that the division is performed as floating-point division, and the result is stored in the float variable 'z.'

// The program then prints 'z' as a floating-point number using printf with the "%f" placeholder.

// This code demonstrates how explicit type casting can be used to ensure the correct data type for a division operation and avoid truncation.
