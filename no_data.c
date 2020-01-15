/* no_data.c --- uninitialized array */
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int no_data[SIZE];
    int i;
    printf("%2s %14s\n", "i", "no_data");
    for(i = 0; i < SIZE; i++)
    {
        printf("%2d %14d\n", i, no_data[i]);
    }
}

