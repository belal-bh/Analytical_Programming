#include<bits/stdc++.h>

using namespace std;

int main(){
    int ship[27]={0};
    int n=0;
    string s;
    int kes=1;
    while(cin>>s && s!="end"){
        int ship[26]={0};
        int n=0;
        char cont[s.size()];
        int i=0;
        for(i=0; i<s.size(); i++){
            cont[i]=s[i];
            ship[(int)(cont[i]-65)]++;
        }
        n=i;
        i=0;
        vector< stack<char> >vstk;
        while(i<n){
            if(vstk.size()!=0){
                int j;
                for(j=0; j<vstk.size(); j++){
                    if(vstk[j].top()>cont[i] && ship[(int)(vstk[j].top()-65)]==0){
                        vstk[j].push(cont[i]);
                        ship[(int)(cont[i]-65)]--;
                        break;
                    }
                    else if(vstk[j].top()==cont[i]){
                        vstk[j].push(cont[i]);
                        ship[(int)(cont[i]-65)]--;
                        break;
                    }

                }
                if(j==vstk.size()){ /// have no place any suitable stack
                    stack<char>stk;
                    stk.push(cont[i]);
                    vstk.push_back(stk);
                    ship[(int)(cont[i]-65)]--;
                }

            }
            else{
                stack<char>stk;
                stk.push(cont[i]);
                vstk.push_back(stk);
                ship[(int)(cont[i]-65)]--;
            }
            i++; /// remember this line
        }
        printf("Case %d: %d\n",kes,vstk.size());
        kes++;
    }

    return 0;
}
