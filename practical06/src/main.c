#include "main.h"


int main(void){
    struct matrices mat;
    mat.n = 5;
    mat.p = 3;
    mat.q = 4;
    for(int i=0;i<mat.n;i++){
        for(int j=0;j<mat.p;j++){
            mat.A[i][j] = i+j;
        }
    }

    for(int i=0;i<mat.p;i++){
        for(int j=0;j<mat.q;j++){
            mat.B[i][j] = i-j;
        }
    }

    for(int i=0;i<mat.n;i++){
        for(int j=0;j<mat.q;j++){
            mat.C[i][j] = 0;
        }
    }

    matmult(&mat);
    for(int i=0;i<mat.n;i++){
        for(int j=0;j<mat.p;j++){
            printf("%lf ", mat.A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

     for(int i=0;i<mat.p;i++){
        for(int j=0;j<mat.q;j++){
            printf("%lf ", mat.B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

     for(int i=0;i<mat.n;i++){
        for(int j=0;j<mat.q;j++){
            printf("%lf ", mat.C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
