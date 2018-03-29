#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    long int n,i;
    while(scanf("%ld%ld",&n,&i)==2 && i>1)
        printf("%ld\n",n+(n-1)/(i-1));
  return 0;
}
