/* 
 * Description: C program to illustrate reversing the elements of an array.
 *
 * Author: Vediyappan Villali
 * Courtesy: Suresh Kumar Srivastava, Deepali Srivastava
 */

#include <stdio.h>

int main()
{
    int  arr[10];
    int  i;
    int  j;
    int  temp;

    // getting array elements
    for (i=0; i<10; i++)
    {
	printf ("Enter value for arr[%d]: ", i);
	scanf ("%d", &arr[i]);
    }

    // reversing array elements
    for (i=0, j=9; i<j; i++, j--)
    {
        temp   = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
    }

    // displaying array elements
    printf ("After reversing: ");
    for (i=0; i<10; i++)
	printf ("%d ", arr[i]);
    printf ("\n");

    return 0;
}
