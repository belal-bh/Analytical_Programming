#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int n,max_age,age,T,min_age;
    while(scanf("%d",&T)==1){
      while (scanf("%d",&n)==1){
        scanf("%d",&age);
        min_age=max_age=age;
        n--;
        while(n--){
            scanf("%d",&age);
            if(age<min_age) min_age=age;
            if(age>max_age) max_age=age;
        }
        printf("%d\n",2*(max_age-min_age));
      }
      T--;
    }
    return 0;
}
