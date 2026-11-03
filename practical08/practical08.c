#include <stdio.h>

int GCD(int a,int b);
int gcd_recursive(int a,int b);

int main(void){
    int a = 8;
    int b = 12;
    printf("GCD(%d, %d) = %d\n", a, b, GCD(a, b));
    printf("gcd_recursive(%d,%d) = %d\n",a,b,gcd_recursive(a,b));
    return 1;
}


int GCD(int a,int b){
    while(b != 0){
        int dummy =b;
        b = a%b;
        a = dummy;
    }
    return a;
}

int gcd_recursive(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd_recursive(b,a%b);
    }
}