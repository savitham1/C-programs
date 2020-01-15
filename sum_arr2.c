/*sum_arr2.c -- sums the elements of an array */

#include <stdio.h>
#define SIZE 10

int sum(int * start, int * end);
int main(void)
{
    int marbles[SIZE] = {34,34,46,67,877,23,56,877,34,67};
    long answer;
    answer = sum(marbles, marbles + SIZE);
    printf("The total number of marbles are: %ld\n", answer);
    return 0;
}

int sum(int * start, int * end)
{
    long total = 0;
    printf("Start = %p    End = %p\n", start, end);
    while (start < end)
    {
        total += *start++;
    }
    printf("Start = %p    End = %p\n", start, end);
    return total;
}
    

