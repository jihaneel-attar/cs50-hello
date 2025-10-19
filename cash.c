#include <cs50.h>
#include <stdio.h>
int main()
{
    int change;
    int coins;
    do
    {
        change = get_int("change owed :");
    }
    while (change < 0);
    coins = 0;
    while (change >= 25)
    {
        change -= 25;
        coins++;
    }
    while (change >= 10)
    {
        change -= 10;
        coins++;
    }
    while (change >= 5)
    {
        change -= 5;
        coins++;
    }
    while (change >= 1)
    {
        change -= 1;
        coins++;
    }
    printf("%i\n", coins);
}
