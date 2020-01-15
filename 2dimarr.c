/* 2dimarr -- 2 dimensional array example */

#include <stdio.h>
#define MONTH 12
#define YEAR 5

int main(void)
{
    const float rain[5][12] = 
    {
        {4.2,4.3,4.2,4.6,4.3,4.6,4.5,4.3,4.3,4.3,4.7,4.5},
        {8.7,8.9,8.4,8.5,8.6,8.3,8.3,6.7,8.4,8.2,8.0,8.4},
        {9.4,9.0,9.7,9.8,9.6,9.5,9.4,9.3,9.2,9.1,9.9,9.4},
        {0.7,1.7,0.4,0.4,7.6,9.5,8.2,7.4,0.6,0,3.0,5.0},
        {3.0,5.6,0.7,0.9,1.7,1.4,0.3,2.5,4.9,3.5,1.5,2.0}
    };
    
    int year, month;
    float subtotal, total;
    printf(" YEAR    TOTAL\n");
    for(year = 0, total = 0; year < YEAR; year++)
    {
        for(month = 0, subtotal = 0; month < MONTH; month++)
        {
            subtotal += rain[year][month];
        }       
        printf(" %d    %.2f\n", 2010 + year, subtotal);
        total += subtotal;
    }
    
    printf("The Yearly average is %4.2f inches.\n", total/YEAR);
    printf("MONTHLY AVERAGES\n");
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
    
    for(month = 0, total = 0; month < MONTH; month++)
    {
        for(year = 0, subtotal = 0; year < YEAR; year++)
        {
            subtotal += rain[year][month];
        }
        printf("%2.1f ", subtotal/YEAR);
    }
    printf("\n");
    return 0;
}

