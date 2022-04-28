/*
 * Description: C program to illustrate passing an array to a function.
 *
 * Author: Vediyappan Villali
 * Courtesy: Suresh Kumar Srivastava, Deepali Srivastava
 */

#include <stdio.h>

void func (int arr[]);

int main()
{
    int  arr[5] = {1, 2, 3, 4, 5};
    int  i;

    printf ("Before calling 'func' function: ");
    for (i=0; i<5; i++)
	printf ("%d ", arr[i]);
    printf("\n");

    // passing array to function
    func (arr);
    
    printf ("After execution of 'func' function: ");
    for (i=0; i<5; i++)
	printf ("%d ", arr[i]);
    printf("\n");

    return 0;
}

void func (int arr[])
{
    int sum = 0;
    int i;

    for (i=0; i<5; i++)
    {
	// modifying array elements
        arr[i] = arr[i] * arr[i];
	sum += arr[i];
    }

    printf ("Sum of squares = %d\n", sum);
}
