#include<stdio.h>
int main(){
    long long  int num=0,max_num=0,max_value,i,j,n,x,y,tmp_x,tmp_y;
    while(scanf("%lld %lld",&x,&y)==2 ){
        if(x>y){
            tmp_x=y;
            tmp_y=x;
        }
        else{
            tmp_x=x;
            tmp_y=y;
        }
        if(x==0 && y==0) break;
        max_num=0;
        for(i=tmp_x;i<=tmp_y;i++){
            num=0;
            for(n=i;n!=0;){
                if(n%2==0){
                    num++;
                   n=n/2;
                }
                else{
                    num++;
                    n=3*n+1;
                }
                if(n==1) break;
           }
           if(num>max_num){
                max_num=num;
                max_value=i;
           }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",tmp_x,tmp_y,max_value,max_num);
    }
    return 0;
}
