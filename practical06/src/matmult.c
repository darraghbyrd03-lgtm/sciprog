#include "main.h"


void matmult(struct matrices *pmat){
    struct matrices mat = *pmat;

    for(int i=0;i<mat.n;i++){
        for(int j=0;j<mat.q;j++){
            mat.C[i][j] = 0;
            for(int k=0;k<mat.p;k++){
                mat.C[i][j] += mat.A[i][k] * mat.B[k][j];
            }
        }
    }

    *pmat = mat;
}
