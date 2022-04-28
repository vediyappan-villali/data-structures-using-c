/*
 * Description: C program to illustrate multiplication of two matrices.
 *
 * Author: Vediyappan Villali
 * Courtesy: Suresh Kumar Srivastava, Deepali Srivastava
 */

#include <stdio.h>
#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 2

int main()
{
    int  mat1[ROW1][COL1];
    int  mat2[ROW2][COL2];
    int  mat3[ROW1][COL2];
    int  i;
    int  j;
    int  k;

    printf ("Enter matrix 1 (%d*%d) row-wise:\n", ROW1, COL1);
    for (i=0; i<ROW1; i++)
    {
	for (j=0; j<COL1; j++)
	{
	    printf ("mat1[%d][%d]: ", i, j);
	    scanf ("%d", &mat1[i][j]);
	}
    }

    printf ("Enter matrix 2 (%d*%d) row-wise:\n", ROW2, COL2);
    for (i=0; i<ROW2; i++)
    {
	for (j=0; j<COL2; j++)
	{
	    printf ("mat2[%d][%d]: ", i, j);
	    scanf ("%d", &mat2[i][j]);
	}
    }

    // matrices multiplication
    for (i=0; i<ROW1; i++)
	for (j=0; j<COL2; j++)
	{
	    mat3[i][j] = 0;
	    for (k=0; k<COL1; k++)
	        mat3[i][j] += mat1[i][k] * mat2[k][j];
	}

    printf ("After matrices multiplication:\n");
    for (i=0; i<ROW1; i++)
    {
	for (j=0; j<COL2; j++)
	    printf ("%5d", mat3[i][j]);
	printf("\n");
    }

    return 0;
}
