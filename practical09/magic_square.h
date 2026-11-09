#include <stdio.h>
// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value
//
int isMagicSquare(int **square, const int n) {
// Eliminate the case where 'n' is negative
//printf("n inside = %d\n", n);/debugging
if(n < 0) 
{
    printf("n is negative \n");
    return 0;
}
// M is the sum of every row, column,
// and the main and secondary diagonals
int M = (n * ((n)*(n) + 1))/2;
int i, j;
// TODO: Checking that every row and column add up to M
for(i=0;i<n;i++){
    int row=0;
    for(j=0;j<n;j++){
        row += square[i][j];
    }
    if(row != M)
    {
        printf("row is not equal\n");
        return 0;
    }
}
for(j=0;j<n;j++){
    int col=0;
    for(i=0;i<n;i++){
        col += square[i][j];
    }
    if(col != M)
    {
        printf("column is not equal\n");
        return 0;
    }
}

// TODO: Checking that the main and secondary diagonals each add up to M
int diagonal_m = 0;
for(i=0;i<n;i++)
{
    diagonal_m += square[i][i];
}

int diagonal_s = 0;
for(i=0;i<n;i++)
{
    diagonal_s += square[i][n-1-i];
}

if(diagonal_m != M)
{
    printf("main diag is not equal\n");
    return 0;
}

if(diagonal_s != M)
{
    printf("secondary diag is not equal\n");
    return 0;
}
// If passed all checks, it is a magic square
return 1;
}