/* 3dimarra.c -- example of an 3 dimensional array */

#include <stdio.h>
#define APT 2
#define FLOOR 5
#define ROOM 4
#define SIZE 3

int main(void)
{
    const float apt[APT][FLOOR][ROOM][SIZE] = 
    {
        {
            {25.6,30.5,50},
            {30,23.5,40.6},
            {45,23.5,10.6}
        },
        {
            {25.6,30.5,30},
            {30,23.5,40.6},
            {45,23.5,10.6}
        },
        {
            {25.6,30.5,50},
            {30,23.5,40.6},
            {45,23.5,10.6}
        },
        {
            {25.6,30.5,50},
            {30,23.5,40.6},
            {45,23.5,10.6}
        }       
    },
    {
        {
            {25.6,30.5,50},
            {30,23.5,40.6},
            {45,23.5,10.6}
        },
        {
            {25.6,30.5,30},
            {30,23.5,40.6},
            {45,23.5,10.6}
        },
        {
            {25.6,30.5,50},
            {30,23.5,40.6},
            {45,23.5,10.6}
        },
        {
            {25.6,30.5,50},
            {30,23.5,40.6},
            {45,23.5,10.6}
        }       
    };

int floor, room, size;
for(int apt = 0; apt < APT; apt++)
{
for( floor = 0; floor < FLOOR; floor++)
{    
    printf("FLOOR : %d\n", floor);
    for(room = 0; room < ROOM; room++)
    {
        printf("ROOM: %d\n", room);
        printf("WIDTH HEIGHT LENGHT\n");
        for(size = 0; size < SIZE; size++)
        {
            printf("%2.1f    ", apt[floor][room][size]);
        }
        printf("\n\n");
    }
}
}


