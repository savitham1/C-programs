#include <stdio.h>

int count = 0;  // static storage duration; file scope; external linkage

void accumulate(int); 
void report_count(void);

int main(void)
{
    extern int count; // Declaration of the external varaible
    auto int value; // Explicitly declared automatic storage variable; no linkage; block scope
    int i; // Implicit declaration of automatic storage variable; no linkage; block scope
    
    printf("Enter an integer value (0 to quit): ");

    while(scanf("%d", &value) == 1 && value > 0)
    {
        for(i = value; i >= 0; i--)
        {
            ++count;
            accumulate(i);

        }
        printf("\nEnter a positive value:");
    }

    report_count();

    return 0;
}

void report_count(void)
{
    printf("\nThe loop excecuted %d times\n", count);
}
