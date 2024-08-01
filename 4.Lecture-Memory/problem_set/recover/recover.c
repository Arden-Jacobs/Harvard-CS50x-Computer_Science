#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Accept a single command-line argument
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }

    // Open the memory card
    FILE *card = fopen(argv[1], "r");
    // check that file could be opened
    if (card == NULL)
    {
        printf("Could not open %s to read the data\n", argv[1]);
        return 1;
    }

    // Create a buffer for a block of data
    uint8_t buffer[512];

    // create variables for the jpeg
    // keeps track of the jpeg count
    int count = 0;
    // create a file pointer
    FILE *img = NULL;
    // the space needed for the filename
    char filename[8];

    // While there's still data left to read from the memory card
    while (fread(buffer, 1, 512, card) == 512)
    {
        // Create JPEGs from the data
        // check the buffer for the start jpeg pattern
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // close the file previous file
            if (img != NULL)
            {
                fclose(img);
            }

            // create a jpeg file
            sprintf(filename, "%03i.jpg", count);
            img = fopen(filename, "w");

            // check that was created successfully
            if (img == NULL)
            {
                printf("Could not create the jpeg file.\n");
                fclose(card);
                return 2;
            }

            // write the data in the jpeg fil
            fwrite(buffer, 1, 512, img);
            // increment the jpg count
            count++;
        }
        else
        {
            // lets continue writing to the jpeg file if no new pattern is found
            if (img != NULL)
            {
                fwrite(buffer, 1, 512, img);
            }
        }
    }
    fclose(img);
    fclose(card);

    return 0;
}
