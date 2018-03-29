#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    double z,x,y,total=0,T,h;
    cin>>T;
    while(T--){
        scanf("%lf%lf%lf",&x,&x,&z);
        h=(x+y)/3;
        total=(x-y)*(z/h);
        cout<<total<<endl;
    }
    return 0;
}
