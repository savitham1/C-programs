// Dynamically allocated array

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double value;
    int max;
    double * ptd;

    printf("Enter the maximum number of double entried:");

    while((scanf("%d", &max) != 1) || max == 0)
    {
        printf("The number was not entered correctly");
        exit(EXIT_FAILURE);
    }

    ptd = (double *) malloc(max * sizeof(double));

    if(ptd == NULL)
    {
        printf("Memory allocation failed!");
        exit(EXIT_FAILURE);
    }

    // Dynamically store the values into an array from the user.

    printf("Enter the values to be stored:\n");
    int i = 0;
    while((i < max) && scanf("%lf", &ptd[i]) == 1)
    {
        i++;
    }

    // Display the array stored

    printf("Here are the values entered\n");

    for(int j = 0; j < max; j++)
    {
        printf("%lf\n", ptd[j]);
    }

    free(ptd);

    return 0;

}
