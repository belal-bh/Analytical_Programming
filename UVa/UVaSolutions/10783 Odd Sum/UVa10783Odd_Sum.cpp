#include<bits/stdc++.h>

using namespace std;

int main(){
    int T,a,b,v[103];
    v[0]=0;
    v[1]=1;
    for(int i= 3; i<103; i+=2){
        v[i]= v[i-2]+i;
    }
    scanf("%d",&T);
    for(int i=1; i<=T; i++){
        scanf("%d%d",&a,&b);
        if(a%2==0)a++;
        if(b%2==0&&b!=0)b--;
        printf("Case %d: %d\n",i,v[b]-v[a]+a);
    }
    return 0;
}
