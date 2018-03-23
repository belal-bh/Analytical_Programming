#include<bits/stdc++.h>

using namespace std;

int main(){
    string line;
    while(getline(cin,line)){
       for(int i=0; i<line.length(); i++){
           line[i]-=7;
       }
       cout<<line<<endl;
    }
    return 0;
}
