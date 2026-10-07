#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    //declare(initialise) variables
    double a = 0; //initial point in sum
    double b = M_PI/3.0; //final point in sum
    int N=12;//number of points to use

    double dx = (b-a)/N;
    double result = tan(a) + tan(b);//sum first and last contribution

    for(int i=1;i<N;i++){ //increment from 1 to ignore the initial position
        double step = i*dx;
        result += 2.0*tan(a+step); //inbetween contributions that need to be multiplied by 2
        //printf("%lf \n",step);//for debugging equidistant steps, only comment out when finished
    }
    result *= (b-a)/(2.0*N);//multiply by prefactor
    printf("The value of the integral is %lf \n",result);
    printf("The exact value of this function is %lf \n" ,log(2.0));
    double diff = result - log(2.0);
    printf("The difference between the two is, %lf \n",diff);
    return 1;
}
