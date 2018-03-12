#include<bits/stdc++.h>

using namespace std;

int main(){
    unsigned long a,b,x,y,carry,soc;
    cin>>a>>b;
    while(a!=0 || b!=0){
        carry=0;
        soc=0;
        while(a!=0 || b!=0){
            x=a%10;
            a=a/10;
            y=b%10;
            b=b/10;
            if(x+y+carry >9){
                carry = 1;
                soc++;
            }
            else{
                carry = 0;
            }
        }
        if(soc==0)printf("No carry operation.\n");
        else if(soc==1)printf("1 carry operation.\n");
        else printf("%d carry operations.\n",soc);
        cin>>a>>b;
    }
    return 0;
}
