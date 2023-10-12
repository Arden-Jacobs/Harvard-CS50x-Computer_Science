// Division with longs, demonstrating double

// Description: This C program prompts the user to enter two long integers, divides 'x' by 'y,' and assigns the result to a double variable 'z' using explicit type casting. It then prints 'z' as a double with increased precision, demonstrating the usage of double data type for improved precision.

// Include necessary libraries: cs50.h for get_long and stdio.h for printf.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user to enter the first long integer and store it in the variable 'x.'
    long x = get_long("x: ");

    // Prompt the user to enter the second long integer and store it in the variable 'y.'
    long y = get_long("y: ");

    // Divide 'x' by 'y' with explicit type casting to double and store the result in the double variable 'z.'
    double z = (double) x / (double) y;

    // Print 'z' as a double with increased precision.
    printf("%.20f\n", z);
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to prompt the user to enter two long integers, divide 'x' by 'y,' assign the result to a double variable 'z' using explicit type casting, and print 'z' as a double with increased precision. It also highlights the use of the double data type for improved precision.

// The #include <cs50.h> and #include <stdio.h> lines include the necessary libraries for using get_long and printf functions.

// Inside the main function, the long x = get_long("x: "); line prompts the user to enter the first long integer and stores it in the variable 'x.'

// The long y = get_long("y: "); line prompts the user to enter the second long integer and stores it in the variable 'y.'

// The program divides 'x' by 'y' with explicit type casting to double, ensuring that the division is performed as double precision, and the result is stored in the double variable 'z.'

// The program then prints 'z' as a double with increased precision, demonstrated by the format string "%.20f".

// By using the double data type, this code provides improved precision for the result, especially with large or certain values of 'x' and 'y,' compared to using float.

// This code serves as an example of division with long integers in C, emphasizing the use of the double data type for enhanced precision.
