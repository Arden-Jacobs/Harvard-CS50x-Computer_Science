#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Take average of red, green, and blue
            float avg = image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue;
            int sum = round(avg / 3.0);
            // Update pixel values
            image[i][j].rgbtRed = sum;
            image[i][j].rgbtGreen = sum;
            image[i][j].rgbtBlue = sum;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Compute sepia values
            int sepiaRed = round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue);
            int sepiaGreen = round(.349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue);
            int sepiaBlue = round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue);

            // Check that sepia values are valid
            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }

            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }

            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }

            // Update pixel with sepia values
            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    // lets divide the width in half to find the middle of the array
    int mod = width / 2;

    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < mod; j++)
        {
            // decrement the index of the array by decreasing the width
            int idx = width - (j + 1);
            // create a temp to hold the value
            RGBTRIPLE temp = image[i][j];

            // Swap pixels
            image[i][j] = image[i][idx];
            image[i][idx] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // Create a copy of image
    RGBTRIPLE copy[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }

    // now to blur the image using a 3x3 box
    for (int row = 0; row < height; row++)
    {
        // get the current pixel that we will be creating the 3x3 box around
        for (int col = 0; col < width; col++)
        {
            // let declare our axis
            int x = -1;
            int y = -1;

            // first lets deal with edge caseses
            if (row == 0)
            {
                x = 0;
            }
            else if (row == height - 1)
            {
                x = -1;
            }

            if (col == 0)
            {
                y = 0;
            }
            else if (col == width - 1)
            {
                y = -1;
            }

            // now to find the average values for each color channel in the 3x3 box
            float avgRed = 0;
            float avgGreen = 0;
            float avgBlue = 0;
            int count = 0;

            for (int i = x; i <= 1; i++)
            {
                for (int j = y; j <= 1; j++)
                {
                    int newRow = row + i;
                    int newCol = col + j;

                    // check if the pixel is within the boundaries of the 3x3 box
                    if (newRow >= 0 && newRow < height && newCol >= 0 && newCol < width)
                    {
                        avgRed += copy[newRow][newCol].rgbtRed;
                        avgGreen += copy[newRow][newCol].rgbtGreen;
                        avgBlue += copy[newRow][newCol].rgbtBlue;
                        count++;
                    }
                }
            }

            // calculate average values and update the pixel
            image[row][col].rgbtRed = round(avgRed / count);
            image[row][col].rgbtGreen = round(avgGreen / count);
            image[row][col].rgbtBlue = round(avgBlue / count);
        }
    }

    return;
}
