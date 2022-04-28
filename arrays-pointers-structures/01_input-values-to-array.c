/* 
 * Description: C program to illustrate input values into an array and display them.
 *
 * Author: Vediyappan Villali
 * Courtesy: Suresh Kumar Srivastava, Deepali Srivastava
 */

#include <stdio.h>

int main()
{
    int  arr[5];
    int  indx;

    // getting array elements
    for (indx=0; indx<5; indx++)
    {
	printf ("Enter the value for arr[%d]: ", indx);
	scanf ("%d", &arr[indx]);
    }

    // displaying array elements
    printf ("The array elements are: ");
    for (indx=0; indx<5; indx++)
	printf("%d ", arr[indx]);
    printf ("\n");

    return 0;
}
