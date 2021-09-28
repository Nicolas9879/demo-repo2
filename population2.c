#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    
    int start = 0;
    while (start < 9)
    {
        start = get_int("Start size: ");
    }
    
    // TODO: Prompt for end size
    
    int end = 0;
    while (end < start)
    {
        end = get_int("End size: ");
    }
    
    // TODO: Calculate number of years until we reach threshold
    
    int y = 0;
    int current_size = start;
    do 
    {
        current_size = current_size + (current_size / 3) - (current_size / 4);
        y++;
    }
    while (current_size < end);
    
    // TODO: Print number of years
    
    printf("%i\n", y);
}
