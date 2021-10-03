#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);

    int change = round(dollars * 100);
    int coins;

    // Minimum number of coins with which that change can be made

    // quarter = 25, dime = 10, nickel = 5, penny = 1

    for (coins = 0; change >= 25; coins++)
    {
        change = change - 25;
    }
     for (; change >= 10; coins++)
    {
        change = change - 10;
    }
    for (; change >= 5; coins++)
    {
        change = change - 5;
    }
    for (; change == 1; coins++)
    {
        change = change - 1;
    }

    printf( "%i\n", coins);
}
