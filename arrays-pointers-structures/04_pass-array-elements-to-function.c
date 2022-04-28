/*
 * Description: C program to illustrate passing array elements to the function.
 *
 * Author: Vediyappan Villali
 * Courtesy: Suresh Kumar Srivastava, Deepali Srivastava
 */

#include <stdio.h>

// function declaration
void find_odd_even (int num);

int main()
{
    int  arr[5];
    int  i;

    // getting elements of array
    for (i=0; i<5; i++)
    {
        printf ("Enter value of arr[%d]: ", i);
	scanf ("%d", &arr[i]);

	// passing array elements to function
	find_odd_even (arr[i]);

	printf ("\n");
    }

    return 0;
}

void find_odd_even (int num)
{
    if (num % 2)
        printf ("%d is an odd number", num);
    else
        printf ("%d is an even number", num);
}
