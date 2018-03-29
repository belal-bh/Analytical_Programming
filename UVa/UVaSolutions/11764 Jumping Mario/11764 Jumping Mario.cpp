#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int T,x,next,tmp,xx,i=1;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&x);
        int count_up=0,count_down=0;
        xx=x-1;
        while(x--){
            scanf("%d",&next);
            if(xx==x){tmp=next;continue;}
            if(next>tmp){///count up step
                tmp=next;
                count_up++;
            }
            else if(next<tmp){///count down step
                tmp=next;
                count_down++;
            }
        }
        printf("Case %d: %d %d\n",i,count_up,count_down);
        i++;
    }
    return 0;
}
