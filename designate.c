 /*designate.c -- use designated initializers */

#include <stdio.h>
#define MONTH 12

int main(void)
{
    int days[MONTH] = { 31, 28, [5] = 30, 31, 31, [11] = 31};
    int i;
    printf("%2s %10s\n", "i", "days");
    for(i = 0; i < MONTH; i++)
    {
        printf("%2d %10d\n", i, days[i]);
    }
}

