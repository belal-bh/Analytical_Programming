/*
 * UVa 10038 - Jolly Jumpers
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=979
 * Root :: Contest Volumes (10000...) :: Volume 112 (11200-11299)
 * belal_bh
 * 06.01.2018
 */
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin>>n){
       bool t[n]={false,},ans=true;
       int a,b,dif=0;
       cin>>a;
       for(int i=1; i<n; i++){
           cin>>b;
           dif= abs(a-b);
           if(dif<n&&dif>0){
               if(t[dif])ans=false;
               else t[dif]=true;
           }
           else ans=false;
           a=b;
       }
       if(ans)cout<<"Jolly\n";
       else cout<<"Not jolly\n";
    }
    return 0;
}

