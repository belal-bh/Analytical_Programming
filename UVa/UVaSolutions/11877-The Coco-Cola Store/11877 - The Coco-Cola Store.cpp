#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    unsigned N;
    while(scanf("%u",&N) && N!=0){
        int ans=0,rem=0,q=0;
        while(N>=2){
            if(N==2){
                N++;
            }
            rem = N%3;
            q = N/3;
            ans = ans + q;
            N = rem + q;
        }
        printf("%d\n",ans);
    }
    return 0;
}
