/*
 * UVa 11172 - Relational Operator
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2113
 * Root :: Contest Volumes (10000...) :: Volume 112 (11200-11299)
 * belal_bh
 * 03.01.2018
 */
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

