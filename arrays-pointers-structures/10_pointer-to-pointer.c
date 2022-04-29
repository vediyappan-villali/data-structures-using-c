/*
 * Description: C program to illustrate pointer to pointer.
 *
 * Author: Vediyappan Villali
 * Courtesy: Suresh Kumar Srivastava, Deepali Srivastava
 */

#include <stdio.h>

int main()
{
    int  i = 10;
    int  *ptr;
    int  **pptr;

    ptr  = &i;
    pptr = &ptr;

    printf ("Address of i = %p\n", &i);
    printf ("Value of ptr = Address of i = %p\n", ptr);
    printf ("Value of *ptr = Value of i = %d\n", *ptr);
    printf ("Address of ptr = %p\n", &ptr);

    printf ("Value of pptr = Address of ptr = %p\n", pptr);
    printf ("Value of *pptr = Value of ptr = %p\n", *pptr);
    printf ("Value of **pptr = Value of i = %d\n", **pptr);
    printf ("Address of pptr = %p\n", &pptr);

    return 0;
}
