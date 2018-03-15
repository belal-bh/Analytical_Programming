#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned N;
    while(scanf("%u",&N) && N!=0){
        if(N<=100){
            printf("f91(%u) = %u\n",N,91);
        }
        else{
            printf("f91(%u) = %u\n",N,N-10);
        }
    }
    return 0;
}
