/*
 * Description: C program to illustrate inputting and displaying matrix.
 *
 * Author: Vediyappan Villali
 * Courtesy: Suresh Kumar Srivastava, Deepali Srivastava
 */

#include <stdio.h>
#define ROW 3
#define COL 4

int main()
{
    int  mat[ROW][COL];
    int  i;
    int  j;

    printf ("Enter elements of matrix (%d*%d) row-wise:\n", ROW, COL);

    // getting elements of matrix
    for (i=0; i<ROW; i++)
    {
	for (j=0; j<COL; j++)
	{
	    printf ("Enter value of mat[%d][%d]: ", i, j);
	    scanf ("%d", &mat[i][j]);
	}
    }

    // displaying matrix
    printf ("Matrix entered:\n");
    for (i=0; i<ROW; i++)
    {
	for (j=0; j<COL; j++)
	    printf ("%3d", mat[i][j]);
	printf("\n");
    }

    return 0;
}
