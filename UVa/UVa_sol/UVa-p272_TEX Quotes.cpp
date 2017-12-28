/*
 * UVa 272 - TEX Quotes
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=121&page=show_problem&problem=208
 * Root :: Competitive Programming: Increasing the Lower Bound of Programming Contests (Steven & Felix Halim) :: Chapter 1. Introduction :: Ad Hoc
 * belal_bh
 * 27.12.17
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    bool status = false;
    string line;
    string::iterator it;
    while(getline(cin,line)){
       for(it = line.begin(); it!= line.end(); it++){
        if(*it=='"'){
            if(status){
                cout<<"''";
                status = false;
            }
            else{
                cout<<"``";
                status = true;
            }
        }
        else{
            cout<<*it;
        }
       }
       cout<<endl;
    }
    return 0;
}
