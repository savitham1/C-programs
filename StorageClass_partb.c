#include <stdio.h>

extern int count; // Declaration of the external variable; defined in parta.c file.

static int total = 0; // Static storage duration; internal linkage; file scope

void accumulate(int k)
{
    static int subtotal= 0; // Static storage duration; block scope; no linkage

    if(k <= 0)
    {
        printf("Loop cycle is %d\n", count);
        printf("Subtotal: %d \nTotal: %d\n", subtotal, total);
        subtotal = 0;
    }

    else
    {
        subtotal += k;
        total += k;
    }

}
