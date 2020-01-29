/* Random number generator

rand0driver.c -- driver program for rand0.c

run with rand0.c

Savitha Munirajaiah
23rd January, 2020.

*/

#include<stdio.h>
#include<string.h>

extern unsigned int rand0();
extern void srand0(unsigned int);
extern unsigned long int seed;

int main(void)
{
    // Stores the number of random numbers generated every call
    int count = 0;

    // Stores the random number to be printed
    unsigned int num = 0;

    printf("Welcome to Random Number Generator!\n");
    printf("How many random number would you like? \n");
    scanf("%d", &count);

    // User initializing the seed value

    printf("Kindly choose a seed value:\n");
    while(scanf("%ld", &seed) == 1)
    {
        for(int i = 1; i <= count; i++)
        {
            num = rand0();
            printf("\n%d: %d", i, num);
            srand0(seed);
        }
        printf("\nPlease enter the next seed or 'q' to quit\n");
    }
    return 0;
}
