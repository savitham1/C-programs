/*Random number generator with automatic seed generation

autoranddriver.c -- driver program for rand0.c

run with rand0.c

Savitha Munirajaiah
23rd January, 2020.

*/

#include<stdio.h>
#include<string.h>
#include<time.h>

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

    // Seed initialized to the system time
    srand0((unsigned int) time(0));

    for(int i = 1; i <= count; i++)
    {
        num = rand0() % 6;
        printf("\n%d: %d", i, num);

    }
    return 0;
}
