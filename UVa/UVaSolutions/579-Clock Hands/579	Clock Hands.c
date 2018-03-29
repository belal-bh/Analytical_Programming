#include<stdio.h>
#include<stdlib.h>

double angle_clock(double H,double M){

    double angle;

    angle=fabs(((11*M)-(60*H))/2);

    if(angle>180){
        angle=fabs(360-angle);
    }
    return angle;
}

int main(){
    double H,M,angle;
    while(scanf("%lf:%lf",&H,&M)==2){
        if(H==0 && M==0) break;
        angle=angle_clock(H,M);
        printf("%.3lf\n",angle);
    }
    return 0;
}
