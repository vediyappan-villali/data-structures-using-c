/*
 * Description: C program to illustrate addition of two matrices.
 *
 * Author: Vediyappan Villali
 * Courtesy: Suresh Kumar Srivastava, Deepali Srivastava
 */

#include <stdio.h>
#define ROW 3
#define COL 4

int main()
{
    int  mat1[ROW][COL];
    int  mat2[ROW][COL];
    int  mat3[ROW][COL];
    int  i;
    int  j;

    printf ("Enter matrix 1 (%d*%d) row-wise:\n", ROW, COL);
    for (i=0; i<ROW; i++)
    {
	for (j=0; j<COL; j++)
	{
	    printf ("mat1[%d][%d]: ", i, j);
	    scanf ("%d", &mat1[i][j]);
	}
    }

    printf ("Enter matrix 2 (%d*%d) row-wise:\n", ROW, COL);
    for (i=0; i<ROW; i++)
    {
	for (j=0; j<COL; j++)
	{
	    printf ("mat2[%d][%d]: ", i, j);
	    scanf ("%d", &mat2[i][j]);
	}
    }

    // matrices addtion
    for (i=0; i<ROW; i++)
	for (j=0; j<COL; j++)
	    mat3[i][j] = mat1[i][j] + mat2[i][j];

    printf ("After matrices addition:\n");
    for (i=0; i<ROW; i++)
    {
	for (j=0; j<COL; j++)
	    printf ("%5d", mat3[i][j]);
	printf("\n");
    }

    return 0;
}
