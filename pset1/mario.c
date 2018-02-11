#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int spaces = 0;
    int hashes = 2;

    //prompt user input
    do
    {
        printf("Height: ");
        height = get_int();
    }
    //validate input beteen parameters
    while (height < 0 || height > 23);

    //draw pyramid half
    for (int i = 0; i <= height; i++)
    {
        spaces = height + 1 - hashes;
    }
    {
        while (spaces >= 0)
        {
            int spaces_left = spaces;
            int hashes_left = hashes;
            //spaces
            while (spaces_left > 0)
            {
                printf(" ");
                spaces_left--;
            }
            //hashes
            while (hashes_left > 0)
            {
                printf("#");
                hashes_left--;
            }
            printf("\n");
            spaces--;
            hashes++;
        }

    }
}