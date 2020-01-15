/*somedata.c -- partially initialized array */

#include <stdio.h>
#define SIZE 5

int main(void)
{
    int somedata[SIZE] = {1465, 1234};
    int i;
    
    printf("%2s %14s\n", "i", "somedata");
    for(i = 0; i < SIZE; i++)
    {
        printf("%2d %14d\n", i, somedata[i]);
    }
    return 0;
}

