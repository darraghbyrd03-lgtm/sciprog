//headers
#include <stdio.h>
#include <math.h>

//define structs
struct matrices{
        int n,p,q;
        double A[5][3], B[3][4],C[5][4];
    };
//define functions
void matmult(struct matrices *Pmat);