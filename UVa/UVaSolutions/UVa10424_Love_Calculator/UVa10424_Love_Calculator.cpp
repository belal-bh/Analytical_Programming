/*
 * UVa 10424 - Love Calculator
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=16&page=show_problem&problem=1365
 * Root :: Contest Volumes (10000...) :: Volume 104 (10400-10499)
 * belal_bh
 * 01.01.2018
 */
#include<bits/stdc++.h>

using namespace std;

int lol(string s){
    int sum=0;
    for(int i=0; i<s.length(); i++){
        if((s[i]>=65&&s[i]<90) || (s[i]>=97&&s[i]<=122)){
            if(s[i]<90){
                sum+=(s[i]-'A')+1;
            }
            else{
                sum+=(s[i]-'a')+1;
            }
        }
    }
    if(sum==0){
        return 0;
    }
    while(sum/10!=0){
        int num=sum;
        int tot=0;
        while(num){
            tot+=num%10;
            num/=10;
        }
        sum=tot;
    }
    return sum;
}

int main(){
    string a,b;
    while(getline(cin,a)&&getline(cin,b)){
        //cin>>a&&cin>>b
        double love=0.00;
        int x=lol(a);
        int y=lol(b);
        if(x<=y&&y!=0){
            love=(double)x/y;
        }
        else if(x!=0){
            love=(double)y/x;
        }
        printf("%.2lf %c\n",love*100,'%');

    }
    return 0;
}

