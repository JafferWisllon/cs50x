#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int change;
    int qtd = 0;
    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 0);

    while (change > 0)
    {
        if (change >= 25)
        {
            change -= 25;
            qtd++;
        }
        else if (change >= 10)
        {
            change -= 10;
            qtd++;
        }
        else if (change >= 5)
        {
            change -= 5;
            qtd++;
        }
        else
        {
            change -= 1;
            qtd++;
        }
    }

    printf("%i\n", qtd);
}
