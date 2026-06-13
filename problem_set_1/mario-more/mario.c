#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);
int main(void)
{
    int height;
    // Prompt the user for the pyramid's height
    do
    {
        height = get_int("Height: ");
    } 
    while (height < 1 || height > 8);

    // Print a pyramid of that height
    for (int i = 0; i < height; i++)
    {
        print_row(height - i - 1, i + 1);
    }
}

void print_row(int spaces, int bricks)
{
    // Print spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    // Print bricks
    for (int j = 0; j < bricks; j++)
    {
        printf("#");
    }
    // Print space
    for (int i = 0; i < 2; i++)
    {
        printf(" ");
    }
    // Print bricks after space
    for (int j = 0; j < bricks; j++)
    {
        printf("#");
    }
    printf("\n");
}