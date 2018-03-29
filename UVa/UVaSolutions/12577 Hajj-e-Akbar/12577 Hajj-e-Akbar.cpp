#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char str[100];
    int i=0;
    while(scanf("%s",str)){
        if(strcmp(str,"*")==0) return 0;
        if(strcmp(str,"Hajj")==0) printf("Case %d: Hajj-e-Akbar\n",++i);
        else printf("Case %d: Hajj-e-Asghar\n",++i);
    }
    return 0;
}
