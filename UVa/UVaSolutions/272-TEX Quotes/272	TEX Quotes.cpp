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
