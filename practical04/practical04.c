#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


double trapezoidal_rule(double maximum_angle, double minimum_angle, double angle, int num_steps);//define function


int main(void){
    //define angles in degrees
    double maximum_angle = 60.0; 
    double minimum_angle = 0.0;
    double step_size = 5.0;
    int num_steps = maximum_angle/step_size;
    //convert angular bounds to rads
    double max_angle_rad = maximum_angle*(M_PI/180.0);
    double min_angle_rad = minimum_angle*(M_PI/180.0);

    double *integral_value = malloc((num_steps+1)*sizeof(double)); 
    double total = 0.0; 
    for(int i=0; i<=num_steps;  i++){
    //angle in degrees
        double angle = minimum_angle + i*step_size;
        //printf("angle is %lf \n",angle);

        //convert to rads
        double angle_rad = angle*(M_PI/180.0);

        integral_value[i] = trapezoidal_rule(max_angle_rad,min_angle_rad,angle_rad,num_steps); 
        total += integral_value[i]; 

        }

    printf("integral = %lf\n", total); 
    
    free(integral_value);              

    return 0;
}


double trapezoidal_rule(double maximum_angle, double minimum_angle, double angle,int num_steps){
    double b=maximum_angle;
    double a=minimum_angle;
    int N =num_steps;
    double result = 0.0;
    if(angle == maximum_angle)
        {
            result += tan(angle);
        }
    else if(angle == minimum_angle)
        {
            result += tan(angle);
        } 
    else{
            result += 2.0*tan(angle); //inbetween contributions that need to be multiplied by 2
        }

        result *= (b-a)/(2.0*N);//multiply by prefactor
    return result;
}



