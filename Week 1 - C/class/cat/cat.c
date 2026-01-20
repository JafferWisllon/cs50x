#include <cs50.h>
#include <stdio.h>

// Prototype
int get_n(void);
void meow(int n);

int main(void)
{
    int n = get_n();
    meow(n);
}

int get_n(void)
{
    int n;
    do
    {
        n = get_int("What's n? ");
    }
    while (n < 0);
    return n;

    // while(true)
    // {
    //     n = get_int("What's n? ");
    //     if(n >= 0)
    //     {
    //         break;
    //     }
    // }
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
