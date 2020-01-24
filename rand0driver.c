/* Random number generator
rand0driver.c -- driver program for rand0.c
run with rand0.c
*/

#include<stdio.h>
#include<string.h>

extern unsigned int rand0();
extern void srand0(unsigned int);
extern unsigned long int seed;

int main(void)
{
    //extern unsigned int prevnum
    int count = 0;
    unsigned int num = 0;
    printf("Welcome to Random Number Generator!\n");
    printf("How many random number would you like? \n");
    scanf("%d", &count);

    printf("Kindly choose a seed value:\n");
    scanf("%ld", &seed);

    for(int i = 1; i <= count; i++)
    {
        num = rand0();
        srand0(num);
        printf("\n%d: %d", i, num);
    }

    return 0;
}
