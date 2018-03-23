#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int a,b,n;
    cin>>n;
    while(n--){
       scanf("%lld%lld",&a,&b);
       if(a>b)printf(">\n");
       else if(a<b)printf("<\n");
       else printf("=\n");
    }
    return 0;
}
