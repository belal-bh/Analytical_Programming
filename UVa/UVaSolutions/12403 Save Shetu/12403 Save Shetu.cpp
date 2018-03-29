#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
    long long int T,K,acc=0;
    char str[10];
    cin>>T;
    while(T--){
        cin>>str;
        if(strcmp(str, "donate")==0){
            cin>>K;  // Please save other Shetu
            acc+=K;
        }
        else if(strcmp(str,"report")==0)cout<<acc<<endl;
    }
    return 0;
}
