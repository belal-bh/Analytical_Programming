/*
 * UVa 458 - The Decoder
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=399
 * Root :: Contest Volumes (10000...) :: Volume 112 (11200-11299)
 * belal_bh
 * 03.01.2018
 */
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

