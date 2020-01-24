/* Random number generator
rand0driver.c -- driver program for rand0.c
run with rand0.c
*/

#include<stdio.h>

extern unsigned int rand0(); // external linkage; file scope function
extern void srand0(unsigned int); 
extern unsigned long int seed; // external linkage; file scope; static storage duration

int main(void)
{
   
    int count = 0;
    unsigned int num = 0;
    printf("Welcome to Random Number Generator!\n");
    printf("How many random number would you like? \n");
    scanf("%d", &count);

    // Get the initial seed value from the user, this increases the randomness of the program
    // Alternatively, this seed value/ object can be initialized to system time.
    
    printf("Kindly choose a seed value:\n");
    scanf("%ld", &seed);

    // Iterate throught the total numbers requested by the user
    for(int i = 1; i <= count; i++)
    {
        num = rand0();
        // To store the previous seed value
        srand0(num);
        printf("\n%d: %d", i, num);
    }
    return 0;
}
