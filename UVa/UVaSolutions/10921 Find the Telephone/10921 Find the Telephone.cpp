#include<stdio.h>
#include<string.h>

int main(){
    char C[40],c[40];
    while(scanf("%s",C)!=EOF){
        int i=0;

        while(C[i]){
            if(C[i]=='1') c[i]='1';
            else if(C[i]=='0') c[i]='0';
            else if(C[i]=='A' || C[i]=='B' || C[i]=='C') c[i]='2';
            else if(C[i]=='D' || C[i]=='E' || C[i]=='F') c[i]='3';
            else if(C[i]=='G' || C[i]=='H' || C[i]=='I') c[i]='4';
            else if(C[i]=='J' || C[i]=='K' || C[i]=='L') c[i]='5';
            else if(C[i]=='M' || C[i]=='N' || C[i]=='O') c[i]='6';
            else if(C[i]=='P' || C[i]=='Q' || C[i]=='R' || C[i]=='S') c[i]='7';
            else if(C[i]=='T' || C[i]=='U' || C[i]=='V') c[i]='8';
            else if(C[i]=='W'|| C[i]=='X'|| C[i]=='Y' || C[i]=='Z') c[i]='9';
            else c[i]='-';
            printf("%c",c[i]);
            i++;
        }
        printf("\n");
    }
    return 0;
}
