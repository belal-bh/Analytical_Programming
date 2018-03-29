#include<iostream>
#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
using namespace std;

int main(){
    double  a,b,c,s;
    double Mar,Bar,Tar,R;

    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){
        //while(cin>>a>>b>>c){
        s=(a+b+c)/2;
        Tar=sqrt((s*(s-a)*(s-b)*(s-c)));
        Mar=pi*pow((Tar/s),2);
        Tar=Tar-Mar;
        R=(a*b*c)/(sqrt(((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))));

        Bar=(pi*pow(R,2))-(Tar+Mar);
        printf("%.4f %.4f %.4f\n", Bar,Tar,Mar);
    }

    return 0;
}
