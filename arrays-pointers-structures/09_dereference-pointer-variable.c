/*
 * Description: C program to illustrate dereferencing pointer variables.
 *
 * Author: Vediyappan Villali
 * Courtesy: Suresh Kumar Srivastava, Deepali Srivastava
 */

#include <stdio.h>

int main()
{
    int     i = 10;
    char    ch = 'a';
    float   f = 22.7;

    int     *iptr = &i;
    char    *cptr = &ch;
    float   *fptr = &f;

    printf ("Value of iptr = %p, Address of i  = %p\n", iptr, &i);
    printf ("Value of cptr = %p, Address of ch = %p\n", cptr, &ch);
    printf ("Value of fptr = %p, Address of f  = %p\n", fptr, &f);

    printf ("Address of iptr = %p\n", &iptr);
    printf ("Address of cptr = %p\n", &cptr);
    printf ("Address of fptr = %p\n", &fptr);

    printf ("Value of i  = %d %d %d\n", i, *iptr, *(&i));
    printf ("Value of ch = %c %c %c\n", ch, *cptr, *(&ch));
    printf ("Value of f  = %f %f %f\n", f, *fptr, *(&f));

    return 0;
}

