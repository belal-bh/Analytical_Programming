#include<bits/stdc++.h>
using namespace std;
int main(){
    int  key[101]={'1','2','3','4','5','6','7','8','9','0','-','=','W','E','R','T','Y','U','I','O','P','[',']','\\','S','D','F','G','H','J','K','L',';','\'','X','C','V','B','N','M',',','.','/',' '};
    char val[101]={'`','1','2','3','4','5','6','7','8','9','0','-','Q','W','E','R','T','Y','U','I','O','P','[', ']','A','S','D','F','G','H','J','K','L', ';','Z','X','C','V','B','N','M',',','.',' '};
    char k[110];
    for(int i=0; i<=100; i++){
        k[(int)key[i]]=val[i];
    }
    string s;
    while(getline(cin,s)){
        for(int i=0; i<s.size(); i++){
            printf("%c",k[(int)s[i]]);
        }
        printf("\n");
    }
    return 0;
}
