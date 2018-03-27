#include<iostream>
#include<stdio.h>
using namespace std;
int mile_cost,Juice_cost;

int main()
{
    int N,Mile,X,Juice,m_mod,j_mod,T,i,j=0;
    cin>>T;
    while(T--){
    scanf("%d",&N);
    for( i=1;i<=N;i++){
        scanf("%d",&X);

        Mile=X/30; m_mod=X%30;
        Juice=X/60; j_mod=X%60;
        mile_cost+=(Mile+1)*10;
        Juice_cost+=(Juice+1)*15;
    }
        j++;
        if(Juice_cost>mile_cost){
           printf("Case %d: Mile %d\n",j,mile_cost);
        }
        else if(Juice_cost==mile_cost){
            printf("Case %d: Mile Juice %d\n",j,Juice_cost);
        }
        else{
            printf("Case %d: Juice %d\n",j,Juice_cost);
        }
        Juice_cost=mile_cost=0;
    }

    return 0;
}
