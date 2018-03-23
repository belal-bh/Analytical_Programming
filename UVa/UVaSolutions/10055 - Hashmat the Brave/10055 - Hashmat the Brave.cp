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
