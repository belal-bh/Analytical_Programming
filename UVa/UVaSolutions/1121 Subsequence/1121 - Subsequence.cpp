#include<bits/stdc++.h>

using namespace std;

int main(){
    long N,S,cs[100009],m,a;
    while(scanf("%ld%ld",&N,&S)==2){
        m=100000999;
        cs[0]=0;
        for(long i=1; i<=N; i++){
            scanf("%ld",&a);
            cs[i]=cs[i-1]+a; // cumulative sum
        }
        for(long i=1; i<=N; i++){
            long j=i;
            while(j<=N && cs[j]-cs[i-1]<S){
                j++;
            }
            if(j>i && j<=N && cs[j]-cs[i-1]>=S){
                m = min(m,(j-i+1));
            }
            else if(cs[i]-cs[i-1]>=S){
                m = 1;
                i=N; //break;
            }
        }
        if(m==100000999){   // unexpected condition
            printf("0\n");
        }
        else{
            printf("%ld\n",m);
        }
    }
    return 0;
}
