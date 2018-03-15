#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int R,N,i=0,suf=0;
    while(scanf("%d%d",&R,&N) && N!=0 && R!=0){
        i++;
        if(R>(N+N*26)){
            printf("Case %d: impossible\n",i);
        }
        else{
            suf=0;
            while(N-R<0){
                suf++;
                R=R-N;
            }
            printf("Case %d: %d\n",i,suf);
        }
    }
    return 0;
}
