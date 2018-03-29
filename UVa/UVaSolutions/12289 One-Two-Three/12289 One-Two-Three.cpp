#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main(){
    int T,count;
    string word;
    scanf("%d",&T);
    while(T--){
        count=0;
        cin>>word;
        if(word.length()==5){
            cout<<"3"<<endl;
            continue;
        }
        if(word[0]=='o' && word[2]=='e') count++;
        else if(word[0]=='o' && word[1]=='n') count++;
        else if(word[1]=='n' && word[2]=='e') count++;

        else if(word[0]=='o' && word[1]=='n' && word[2]=='e') count++;
        if(count>=1) cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
    return 0;
}
