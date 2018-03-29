#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n,m,T;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&n,&m);
        if((n-1)%(m-1)!=0) cout<<"cannot do this"<<endl;
        else printf("%d\n",(n-1)/(m-1));
    }
    return 0;
}
