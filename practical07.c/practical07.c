#include <stdio.h>
#include <stdlib.h>

int *allocatearray(int n);
void fillwithones(int *arr, int n);
void printarray(const int *arr, int n);
double calculateapproximation(int i);
int main(void) {
   //Question 1
   
   int polyorder;
   printf("Enter an integer to set the maximum polynomial order: \n");
   scanf("%d",&polyorder);
   double *functionarray = malloc((polyorder+1)*sizeof(double));
   for(int i=1;i<=polyorder;i++){
    functionarray[i] = calculateapproximation(i);
    printf("f(%d) = %lf \n",i,functionarray[i]);
   }
   printf("Approximation will get worse due to the equation being a taylor expansion although to the number of \nsignificant figures given for e it does not look like it deviates");
   printf("\n");
   printf("\n");
   
   
   //Question 2
    /*
    int n=142
    int n=14
    int n=20
    */

    int n = 5;//size of array
    int *memarray = allocatearray(n);//memory allocation
    fillwithones(memarray, n);//initialise to be array of 1s
    printarray(memarray, n);//print
    free(memarray);
    return 0;
}

int *allocatearray(int n) {
    return malloc(n * sizeof(int));
}

void fillwithones(int *array, int n) {
    for (int i = 0; i < n; i++) {
        array[i] = 1;
    }
}

void printarray(const int *array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

double calculateapproximation(int n){
    double result=0.0;
    for(int i=0;i<=n;i++){
        double sum,denom,prod;
        prod = 1.0;
        for(int j=1;j<=i;j++){
            
            prod *= j; 

        }
        denom = prod;
        result += 1.0/denom;
    }
    result = result;
    return result;
}