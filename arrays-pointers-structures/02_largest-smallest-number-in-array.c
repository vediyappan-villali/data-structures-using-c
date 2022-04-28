/*
 * Description: C program to illustrate finding the smallest and largest number in an array.
 *
 * Author: Vediyappan Villali
 * Courtesy: Suresh Kumar Srivastava, Deepali Srivastava
 */

#include <stdio.h>

int main()
{
    int arr[10] = {2, 19, 3, 4, 8, 9, 11, 1, 18, 7};
    int indx;
    int smallest;
    int largest;
   
    smallest = largest = arr[0];

    // finding smallest and largest numbers and storing them
    for (indx=1; indx<10; indx++)
    {
        if (arr[indx] < smallest)
	    smallest = arr[indx];
	if (arr[indx] > largest)
	    largest = arr[indx];
    }

    printf ("Smallest number = %d\n", smallest);
    printf ("Largest number = %d\n", largest);

    return 0;
}
