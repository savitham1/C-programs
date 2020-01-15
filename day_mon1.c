/* day_mon1.c print the days for each month */

#include <stdio.h>
#define SIZE 12

int main(void)
{
    int day[SIZE] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    printf("Month Days\n");
    for(index = 0; index < SIZE; index++)
    {
        printf("%2d%7d\n", index + 1, day[index]);
    }
}


