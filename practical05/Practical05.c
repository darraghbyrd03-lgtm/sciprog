#include <math.h>
#include <stdio.h>
int fibonacci(int n, int fib_array[]);
double arctanh1(double x, double delta);
double arctanh2(double x);
int main(void){

    //part a) the fibonacci sequence
    int n;
    printf("Enter an integer n for the fibonacci sequence: \n");//number must be less than 47 otherwise integer overflow, could be fixed by changing types but not necessary. Also will break for n<3 as there is no error handling implemented.
    scanf("%d", &n);
    printf("Beginning fibonacci sequence for n=%d\n",n);
    int fib_sequence[n];
    fibonacci(n,fib_sequence);
    for(int i=0;i<=n;i++)
    {
        printf("%d\n",fib_sequence[i]);
    }


    //part b) approximations for arctan
    double delta;
    printf("Enter a double to be used as the tolerance for the approximation: \n");
    scanf("%lf",&delta);

    //set up position array for indexing
    int array_size= 1 + (0.9/0.01)*2;
    double tanh1_array[array_size], tanh2_array[array_size],difference[array_size];
    for(int i=0; i<array_size; i++)
    {   
        double x = -0.9 + i*0.01;
        tanh1_array[i] = arctanh1(x, delta);
        tanh2_array[i] = arctanh2(x);

        difference[i] = fabs(tanh1_array[i] - tanh2_array[i]);
    
    }

    for(int i=0; i<array_size; i++){
        double x = -0.9 + i*0.01;
        printf("The difference between methods for position %lf is: %.10g \n",x,difference[i]);
    }

    return 0;
}

int fibonacci(int n,int fib_array[n]){
    fib_array[0]=0;
    fib_array[1]=1;
    for(int i=2; i<=n;i++){
        fib_array[i]=fib_array[i-1]+fib_array[i-2];
    }

    return 1;
}

double arctanh1(double x, double delta){
    double result;
    double sum=0.0;
    double answer[]={0.0,1.0};
    int n=0;
    while(fabs(answer[0]-answer[1])>delta)
    {
        answer[0]=answer[1];
        sum+=(pow(x,2*n+1))/(2*n+1);
        answer[1]=sum;
        n=n+1;
    }
    result = answer[1];
    return result;
}

double arctanh2(double x){
    double result;
    result = 0.5*(log(1.0+x) - log(1.0-x));
    return result;

}