#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get input from user
    string name = get_string("What's your name? ");
    // output formatted string to console
    printf("hello, %s\n", name);
}
