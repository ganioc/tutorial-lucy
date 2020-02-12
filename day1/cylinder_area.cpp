#include <stdio.h>
#include <math.h>

void compute1(){
    const double pi = acos(-1.0);
    printf("pi is: %lf\n",pi);

    double r,h,s1,s2,s;
    scanf("%lf %lf", &r,&h);
    s1=pi*r*r;
    s2=2*pi*r*h;
    s=s1*2.0+s2;
    printf("Area=%.4f\n",s);
    
}

int main(){

    compute1();
    return 0;
}