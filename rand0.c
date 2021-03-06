/* Random number generator

rand0.c -- generates random number between 0 - RANDMAX (size of int in this program)
seed is initialized to '1' but can be assigned to system time
for better outputs

run with rand0driver.c
*/

#include<stdio.h>

unsigned long int seed;
extern void srand0(unsigned int prev);

unsigned int rand0()
{
    // Magic formulae
    // Linear Congruential Generator Algorithm
    seed = seed * 1103515245 + 12345;
    return (unsigned int)   (seed/ 65536) % 32768;

}

void srand0(unsigned int prev)
{
    seed = prev;
}
