#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    int T,S,state[102]={0},P;
    char ins[20];
    scanf("%d",&T);
    while(T--){
        scanf("%d",&S);
        int pos=0;
        for(int i=1;i<=S;i++){
            cin>>ins;
            if(strcmp(ins,"LEFT")==0){
                state[i]=-1;
                pos+=state[i];
            }
            else if(strcmp(ins,"RIGHT")==0){
                state[i]=1;
                pos+=state[i];
            }
            else{
                scanf("%s %d",ins,&P);
                pos+=state[P];
                state[i]=state[P];
            }
        }
        cout<<pos<<endl;
    }
    return 0;
}
