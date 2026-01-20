#include <cs50.h>
#include <stdio.h>

void buildLineBox();
void buildColumnBox();
void build2dColumn();

int main(void)
{
    // buildLineBox();
    // buildColumnBox();
    build2dColumn();
}

void buildLineBox()
{
    for(int i = 0; i < 3; i++)
    {
        printf("?");
    }
    printf("\n");
}

void buildColumnBox()
{
    for(int i = 0; i < 3; i++)
    {
        printf("#\n");
    }
}

void build2dColumn()
{
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}
