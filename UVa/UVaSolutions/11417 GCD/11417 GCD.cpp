#include<iostream>
#include<stdio.h>
using namespace std;

int GCD(int a,int b){
    if(a==0) return b;
    else GCD(b%a,a);
}

int main(){
    int i,j,N,g;
    while(scanf("%d",&N) && N!=0){
        g=0;
        for(i=1;i<=N;i++)
            for(j=i+1;j<=N;j++) g+=GCD(i,j);
        printf("%d\n",g);
    }
    return 0;
}
