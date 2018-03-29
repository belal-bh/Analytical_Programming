#include<stdio.h>
#include<math.h>

int main(){
    int T,n,i;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        n=abs((((((((n*567)/9)+7492)*235)/47)-498)/10)%10);
        printf("%d\n",n);
    }
    return 0;
}
