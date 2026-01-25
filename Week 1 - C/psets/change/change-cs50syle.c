#include <cs50.h>
#include <stdio.h>

int calcule_quarters(int cents);
int calcule_dimes(int cents);
int calcule_nickels(int cents);
int calcule_pennies(int cents);

int main(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    int quarters = calcule_quarters(cents);
    cents = cents - (quarters * 25);

    int dimes = calcule_dimes(cents);
    cents = cents - (dimes * 10);

    int nickels = calcule_nickels(cents);
    cents = cents - (nickels * 5);

    int pennies = calcule_pennies(cents);
    cents = cents - (pennies * 1);

    int coins = quarters + dimes + nickels + pennies;
    printf("%i\n", coins);
}

int calcule_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        cents -= 25;
        quarters++;
    }
    return quarters;
}

int calcule_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        cents -= 10;
        dimes++;
    }
    return dimes;
}

int calcule_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        cents -= 5;
        nickels++;
    }
    return nickels;
}

int calcule_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        cents -= 1;
        pennies++;
    }
    return pennies;
}
