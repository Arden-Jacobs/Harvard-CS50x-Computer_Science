#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int start_size;
    // Prompt for start size
    do {
        start_size = get_int("Start size: ");
    }while(start_size < 9);

    int end_size;
    // Prompt for end size
    do {
        end_size = get_int("End size: ");
    }while(end_size < start_size);

    // Calculate number of years until we reach threshold
    int year = 0;

    if (start_size != end_size)
    {
        for (; start_size < end_size;)
        {
            start_size = start_size + (start_size / 3) - (start_size / 4);
            year++;
        }
    }

    // Print number of years
    printf("Years: %d\n", year);
}
