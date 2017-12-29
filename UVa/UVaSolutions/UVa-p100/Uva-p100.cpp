/*
 * UVa 100 - The 3n + 1 problem
 * Root :: Competitive Programming: Increasing the Lower Bound of Programming Contests (Steven & Felix Halim) :: Chapter 1. Introduction :: Ad Hoc
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=121&page=show_problem&problem=36
 * belal_bh
 * 26.12.17
 */
#include<bits/stdc++.h>

using namespace std;

int rec(long long int n, int cy=0){
    if(n==1)
        return cy+1;
    if(n%2==1)
        return rec(3*n+1,cy)+1;
    else
        return rec(n/2,cy)+1;
}

int max_cycle(int i,int j){
    int cy_max = 1;
    for(long long int n=i; n<=j; n++){
        cy_max = max(cy_max, rec(n));
    }
    return cy_max;
}

int main(){
    int i,j;
    while(scanf("%d%d",&i,&j)!=EOF){
       printf("%d %d ",i,j);
       if(i>j) swap(i,j);
       printf("%d\n",max_cycle(i,j));
    }
    return 0;
}

