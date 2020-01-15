/*sum_arr1.c -- sums the elements of an array */

#include <stdio.h>
#define SIZE 10

int sum(int *, int n);
int main(void)
{
    int marbles[SIZE] = {30,45,60,20,56,70,34,34,76,45};
    int index;
    long answer;
    answer = sum(marbles, SIZE);
    printf("Total number of Marbles = %ld\n", answer);
    printf("The size of marbles array is %zd bytes\n", sizeof marbles);
    return 0;
}

int sum(int *ar, int n)
{
    int index;
    long total = 0;
    for(index = 0; index < n; index++)
    {
        total += ar[index];
    }
    printf("The size of ar is %zd bytes\n", sizeof ar);
    return total;
}

