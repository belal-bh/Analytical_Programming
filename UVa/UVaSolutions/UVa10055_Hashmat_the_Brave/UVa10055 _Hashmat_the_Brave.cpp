/*
 * UVa 10055 - Hashmat the Brave
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=996
 * Root :: Contest Volumes (10000...) :: Volume 112 (11200-11299)
 * belal_bh
 * 02.01.2018
 */
#include<bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long int i,j;
    while(scanf("%llu%llu",&i,&j)!=EOF){
       if(i>=j){
          printf("%llu\n",(i-j));
       }
       else{
          printf("%llu\n",(j-i));
       }
       // 4294967296 4294967296 4294967296 0 0 4294967296
    }
    return 0;
}

