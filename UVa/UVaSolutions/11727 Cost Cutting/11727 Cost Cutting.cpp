#include<stdio.h>
int main(){
    int x,y,z,T,i=1;
    scanf("%d",&T);
    while(i<=T){
        scanf("%d %d %d",&x,&y,&z);
        if((x>y && x<z)||(x<y&&x>z)) printf("Case %d: %d\n",i,x);
        else if((y>x && y<z) || (y<x && y>z)) printf("Case %d: %d\n",i,y);
        else printf("Case %d: %d\n",i,z);
        i++;
    }
    return 0;
}
