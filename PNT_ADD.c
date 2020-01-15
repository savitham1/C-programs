/* pnt_add.c -- pointer addition */

#include <stdio.h>
#define SIZE 5

int main(void)
{
    short data[SIZE] = {30,23,34,89};
    short *pti;
    short index;
    double bill[SIZE] = {3.0, 4556.000,456};
    double *ptf;
    
    pti = data;
    ptf = bill;
    printf("%23s %15s\n","Short", "Double");
    for(index = 0; index < SIZE; index++)
    {
        printf("pointers + %d = %10p %10p\n", index, pti + index, ptf + index);
        printf("%10d %10f\n", *(pti+index), *(ptf+index));
    }
    return 0;
}

