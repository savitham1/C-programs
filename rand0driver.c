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

int main(void)
{
    //extern unsigned int prevnum
    int count = 0;
    unsigned int num = 0;
    printf("Welcome to Random Number Generator!\n");
    printf("How many random number would you like? \n");
    scanf("%d", &count);

    for(int i = 1; i <= count; i++)
    {
        num = rand0();
        srand0(num);
        printf("%d: %d\n", i, num);
    }

    return 0;
}
