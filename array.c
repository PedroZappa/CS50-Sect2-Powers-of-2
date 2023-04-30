#include <cs50.h>
#include <stdio.h>

int main(void) // Powers of 2
{
    // Get array length
    int length;
    do
    {
        length = get_int("Input Array Length Value: ");
    } 
    while ( length < 1); // Requires length to be a positive integer;
    
    // Declare array
    int twice[length];
    // Set first value
    twice[0] = 1;


    if (length == 1)
    {
        printf("\narray[%i] = { %i }", length, twice[0]);
    }
    else 
    {
        printf("\narray[%i] = { %i, ", length, twice[0]);

        // Loop through the array starting at index 1;
        for (int i = 1; i < length; i++)
        {
            // Make current element twice the previous
            twice[i] = 2 * (twice[i - 1]);

            // Print current element
            printf("%i", twice[i]);
            if ( i < length-1) 
            {
                printf(", ");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("}\n");
    }
}