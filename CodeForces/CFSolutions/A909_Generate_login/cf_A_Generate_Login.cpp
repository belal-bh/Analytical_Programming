/*
* CF: A. Generate Login
* http://codeforces.com/contest/909/problem/A
* belal_bh
* 29.12.17
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    string fnam,lnam;
    cin>>fnam>>lnam;
    int i=1;
    cout<<fnam[0];
    while(fnam[i]<lnam[0] && i< fnam.length()){
        cout<<fnam[i];
        i++;
    }
    cout<<lnam[0];
    return 0;
}
