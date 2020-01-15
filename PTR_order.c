/*order.c -- precedence in pointer operations */

#include <stdio.h>
#define SIZE 2
int data[SIZE] = {100,200};
int moredata[SIZE] = {300,400};

int main(void)
{
    int * p1, * p2, * p3;
    p1 = p2 = data;
    p3 = moredata;
    
    printf("*p1 = %d ,*p2 =%d ,*p3 = %d\n", * p1, * p2, * p3);
    printf("*p1++ = %d ,*(p2++ =%d ,*p3 = %d\n", * p1++, (*p2)++, * p3);
    printf("*p1 = %d ,*p2 =%d ,*p3 = %d\n", * p1, * p2, * p3);
    return 0;
}

