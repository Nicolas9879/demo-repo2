#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Pyramids
    int columns,hashes,spaces;
    for (columns = 0; columns < height; columns++)
    {

        // Left pyramid
        for (spaces = height - 1; spaces > columns; spaces--)
        {
             printf(" ");
        }

        for (hashes = 0; hashes <= columns; hashes++)
        {
             printf("#");
        }

        // Right pyramid
         for (int spaces2 = columns - 2; spaces2 < columns; spaces2++)
        {
             printf(" ");
        }
         for (int hashes2 = 0; hashes2 <= columns; hashes2++)
        {
             printf("#");
        }
        printf("\n");

    }
}

