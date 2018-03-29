#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int T,N,marks[1100];
    double average;
    scanf("%d",&T);
    while(T--){
        int total=0;
        scanf("%d",&N);
        for(int i=0;i<N;i++){
            scanf("%d",&marks[i]);
            total+=marks[i];
        }
        average=(double)total/(double)N;
        int num=0;
        for(int i=0;i<N;i++){
            if(average<marks[i]) num++;
        }
        printf("%.3lf%%\n",((double)num/(double)N)*100);
    }
    return 0;
}
