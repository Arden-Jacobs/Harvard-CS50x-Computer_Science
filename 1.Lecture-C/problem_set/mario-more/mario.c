#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    // Prompt for height
    do {
        height = get_int("Start size: ");
    }while(height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        // Print spaces (left-aligned)
        for (int space = 0; space < height-1-i; space++)
        {
            printf(" ");
        }
        // Print '#' characters left-aligned
        for (int left = 0; left < i+1; left++)
        {
            printf("#");
        }
        // Print spaces (seperate the 2 halfs)
        printf("  ");
        // Print '#' characters right-aligned
        for (int right = 0; right < i+1; right++)
        {
            printf("#");
        }
        // Move to the next line for the next row
        printf("\n");
    }
}
