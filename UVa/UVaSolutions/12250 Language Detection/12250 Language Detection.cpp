#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int i=0;
    char st[50];

    while(scanf("%s",st)!=EOF){

        if(strcmp(st,"#")==0){
            break;
        }
        else if(strcmp(st,"HELLO")==0){
            printf("Case %d: ENGLISH\n",++i);
        }
        else if(strcmp(st,"HOLA")==0){
            printf("Case %d: SPANISH\n",++i);
        }
        else if(strcmp(st,"HOLA")==0){
            printf("Case %d: SPANISH\n",++i);
        }
        else if(strcmp(st,"HALLO" )==0){
            printf("Case %d: GERMAN\n",++i);
        }
        else if(strcmp(st,"BONJOUR")==0){
            printf("Case %d: FRENCH\n",++i);
        }
        else if(strcmp(st,"CIAO")==0){
            printf("Case %d: ITALIAN\n",++i);
        }
        else if(strcmp(st,"ZDRAVSTVUJTE")==0){
            printf("Case %d: RUSSIAN\n",++i);
        }
        else{
            printf("Case %d: UNKNOWN\n",++i);
        }
    }

    return 0;
}
