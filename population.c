#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x,y,z,n,o ;
    
    // TODO: Prompt for start size
    do
    { 
        x=get_int("start size: ");
    }
    while (x<9);
    // TODO: Prompt for end size
    do
    {
        y=get_int("end point: ");
    }
    while (y < x);
    // TODO: Calculate numbers of years until we reach threshold
    for (z=0; x<y; z++)
    {
    n=x/3;
    o=x/4;
    x = x + n - o;
    }
    // TODO: Print number of years
    {
        printf("Years: %i\n", z);
    }
}

