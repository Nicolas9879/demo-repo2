#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int start_size = 0;
    while (start_size < 9)
    {
        start_size = get_int("Start size: ");
    }

    // TODO: Prompt for end size

    int end_size = 0;
    while (end_size < start_size)
    {
        end_size = get_int("End size: ");
    }

    // TODO: Calculate number of years until we reach threshold

    int y = 0;
    int current_size = start_size;
    while (current_size < end_size)
    {
        current_size = current_size + (current_size / 3) - (current_size / 4);
        y++;
    }
    
    // TODO: Print number of years

    printf("Years: %i\n", y);
}
