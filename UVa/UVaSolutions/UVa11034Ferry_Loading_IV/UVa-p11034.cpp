#include<bits/stdc++.h>

using namespace std;

struct Car{
    long len;
    string bank;
};

int main(){
    int T,m;
    cin>>T;
    while(T--){
        queue<Car>lq,rq;
        Car f,c;
        cin>>f.len>>m;
        f.len=f.len*100;
        f.bank = "left";
        while(m--){
            cin>>c.len>>c.bank;
            if(c.bank=="left")lq.push(c);
            else rq.push(c);
        }
        long cntr=0, load=0;
        while(!lq.empty() || !rq.empty()){
            /// when ferry at left bank
            if(f.bank=="left"){
                if(!lq.empty()){
                    load = 0;
                    while(load<=f.len && !lq.empty()){
                        if(load+lq.front().len <= f.len){
                            load+= lq.front().len;
                            lq.pop();
                        }
                        else load+= lq.front().len;
                    }
                    cntr++;
                    f.bank = "right";
                }
                else if(!rq.empty()){
                    cntr++;
                    f.bank = "right";
                }
            }
            /// when ferry right bank
            else{
                if(!rq.empty()){
                    load = 0;
                    while(load<=f.len && !rq.empty()){
                        if(load+rq.front().len <= f.len){
                            load+= rq.front().len;
                            rq.pop();
                        }
                        else load+= rq.front().len;
                    }
                    cntr++;
                    f.bank = "left";
                }
                else if(!lq.empty()){
                    cntr++;
                    f.bank = "left";
                }
            }
        }
        printf("%d\n",cntr);
    }

    return 0;
}
