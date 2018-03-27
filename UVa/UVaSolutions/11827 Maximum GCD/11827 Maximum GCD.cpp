#include<iostream>
#include<string>
#include<stdio.h>
#include<sstream>
#include<vector>

using namespace std;
int Max_GCD(string str);
int gcd_(int a,int b){
    if(a==0) return b;
    else return gcd_(b%a,a);
}
int main()
{
    int T;
    string str;

    scanf("%d\n",&T);
    while(T--){
        getline(cin,str);
        cout<<Max_GCD(str)<<endl;
    }

    return 0;
}

int Max_GCD(string str){
    int max_num=0,tmp_num=0,num=0;
    stringstream splited_num(str);
    vector<int> vec;
    while(splited_num>>num){ // keep the number fro splited_num in num
        vec.push_back(num);
    }

    for(int i=0;i<vec.size();i++){
        for(int j=i+1;j<vec.size();j++){
            max_num = max(max_num, gcd_(vec[i],vec[j]));
        }
    }
    return max_num;
}




