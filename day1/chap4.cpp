#include <stdio.h>
#include <math.h>

struct Point{double x,y;};
double dist2(struct Point a,struct Point b){
    return hypot(a.x-b.x,a.y-b.y);
}

double dist(double x1,double y1,double x2,double y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}


int main(){
    printf("hello\n");
    printf("distance is %f\n", dist(1,1,1,3));
    printf("ceil is %f\n", ceil(1.34));
    printf("floor is %f\n", floor(133.34));
    printf("pow is %f\n", pow(6,10));

    struct Point apoint = {1,2};
    struct Point bpoint = {1,3};

    printf("use dist2 %f\n",dist2(apoint,bpoint));

    return 0;
}