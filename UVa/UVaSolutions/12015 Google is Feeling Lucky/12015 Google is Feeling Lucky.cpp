#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
    unsigned int T,n[11],m;
    char str[11][101];
    cin>>T;
    for(int t=1;t<=T;t++){
        m=0;
        int j=1;
        for(int i=0;i<10;i++){
            scanf("%s %u",&str[i],&n[i]);
            m = max(m,n[i]);
        }
        cout<<"Case #"<<t<<":"<<endl;
        for(int i=1;i<10;i++){
            if(m==n[i]){
                cout<<str[i]<<endl;
            }
        }
    }
    return 0;
}
