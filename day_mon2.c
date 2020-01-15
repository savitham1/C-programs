/* day_mon2.c -- letting compiler count the number of elements in an array */

#include <stdio.h>
int main(void)
{
    int day_mon2[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;
    
    // sizeof function calculates the size of an array in bytes
    // size of day_mon2[] 
    // 12 * 4 bytes(int) + 1 (null character) * 4 = 48+4 = 54 
    
    int size = sizeof(day_mon2) / sizeof(day_mon2[0]);
    printf("Size of the array: %d\n", size);
    printf("%2s %10s\n", "i", "day_mon2");
    
    for(i = 0; i < size; i++)
    {
        printf("%2d %10d\n", i, day_mon2[i]);
    }
}

