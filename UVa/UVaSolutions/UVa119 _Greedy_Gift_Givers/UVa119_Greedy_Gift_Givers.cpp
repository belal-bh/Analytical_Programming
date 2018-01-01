/*
 * UVa 119 - Greedy Gift Givers
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=55
 * Root :: Problem Set Volumes (100...1999) :: Volume 1 (100-199)
 * belal_bh
 * 01.01.2018
 */
#include<bits/stdc++.h>

using namespace std;
string person[10];
int gain[10];

void update(int np,string prsn, int tk, bool give){
    for(int i=0; i<np; i++){
        if(person[i].compare(prsn)==0){
            if(give){
                gain[i]-=tk;
            }
            else{
                gain[i]+=tk;
            }
            break;
        }
    }
}

int main(){
    int n,flag=0;
    while(cin>>n){ ///scanf("%d",&n)==1 && n!=EOF
        if(flag){
            cout<<endl;
        }
        for(int i=0; i<n; i++){
            cin>>person[i];
            gain[i]=0;
        }
        for(int i=0; i<n; i++){
            string giver;
            int gift,nr;
            cin>>giver>>gift>>nr;
            if(nr!=0){
               int tk=gift/nr;
               update(n,giver,tk*nr,true);
               string rcvr;
                for(int j=0; j<nr; j++){
                    cin>>rcvr;
                    update(n,rcvr,tk,false);
                }
            }

        }
        for(int i=0; i<n; i++){
            cout<<person[i]<<' '<<gain[i]<<endl;
        }
        flag++;
    }
    return 0;
}

