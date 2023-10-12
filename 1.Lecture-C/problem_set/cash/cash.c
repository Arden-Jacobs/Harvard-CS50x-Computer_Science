// Change Calculator

// Description: This C program serves as a change calculator that calculates the minimum number of coins needed to provide change for a given amount in cents. The program first asks the user for the amount in cents, then calculates the number of quarters, dimes, nickels, and pennies needed to make that change, and finally prints the total number of coins required to provide the change.

// Include necessary libraries: cs50.h for get_int and stdio.h for printf.
#include <cs50.h>
#include <stdio.h>

// Function prototypes
int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask the user for the amount in cents
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);

    // Sum the coins
    int coins = quarters + dimes + nickels + pennies;

    // Print the total number of coins to give the customer
    printf("%i\n", coins);
}

// Get the amount in cents from the user
int get_cents(void)
{
    int cents = 0;
    do {
        cents = get_int("Enter the amount in cents: ");
    } while (cents < 0);
    return cents;
}

// Calculate the number of quarters
int calculate_quarters(int cents)
{
    int quarters = cents / 25;
    return quarters;
}

// Calculate the number of dimes
int calculate_dimes(int cents)
{
    int dimes = cents / 10;
    return dimes;
}

// Calculate the number of nickels
int calculate_nickels(int cents)
{
    int nickels = cents / 5;
    return nickels;
}

// Calculate the number of pennies
int calculate_pennies(int cents)
{
    return cents;  // The remaining cents are equivalent to pennies.
}

// Explanation:

// The comments at the top provide a brief description of the program's purpose, which is to calculate the minimum number of coins required to provide change for a given amount in cents.

// The #include <cs50.h> and #include <stdio.h> lines include the necessary libraries for using the get_int function and the printf function.

// The main function performs the following steps:
// 1. Asks the user for the amount in cents using the 'get_cents' function.
// 2. Calculates the number of quarters, dimes, nickels, and pennies needed to make the change.
// 3. Prints the total number of coins required to provide the change.

// The 'get_cents' function prompts the user for the amount in cents and ensures that a non-negative value is entered.

// The 'calculate_quarters', 'calculate_dimes', 'calculate_nickels', and 'calculate_pennies' functions calculate the number of each type of coin needed to make the change based on the remaining cents.

// The code demonstrates the use of functions to organize and modularize the program. It calculates the minimum number of coins efficiently to provide the required change.

// The program's design and structure make it clear and maintainable, and the explanation provides an overview of its functionality.
