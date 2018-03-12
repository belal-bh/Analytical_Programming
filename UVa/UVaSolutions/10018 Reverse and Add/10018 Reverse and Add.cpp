#include<bits/stdc++.h>

using namespace std;
unsigned int rev(unsigned int p){
    unsigned int r=0,rem=0;
    while(p!=0){
        rem = p%10;
        p=p/10;
        r=r*10 + rem;
    }
    return r;
}

int main(){
    int N,itar;
    unsigned int p,r,s;
    scanf("%d",&N);
    while(N--){
        scanf("%u",&p);
        r= rev(p);
        itar=0;
        if(p!=r){
            while(p!=r){
                itar++;
                p=p+r;
                r = rev(p);
            }
        }
        printf("%d %u\n",itar,p);
    }
    return 0;
}
