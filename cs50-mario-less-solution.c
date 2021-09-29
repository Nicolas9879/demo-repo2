#include <cs50.h>
#include <stdio.h>

int main(void)
{   // Prompt user for height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while ( (height < 1) || (height > 8) );

    int columns,rows,space;
    // Columns
    for (columns = 0; columns < height; columns++)
    {

        // Space
        for (space = height - 1; space > columns; space--)
        {
            printf(" ");
        }

          // Rows
        for (rows = 0; rows < columns; rows++)
        {
            printf("#");
        }
        printf("#\n");
    }
}
