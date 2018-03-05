#include<bits/stdc++.h>

using namespace std;
struct Car{
    int id;
    int arvt;
    int ext;
    string bank;
};

int main(){
    int T;
    cin>>T;
    while(T--){
        queue<Car>lq,rq;
        int n,t,m;
        cin>>n>>t>>m;
        Car v[m];
        Car c,f;
        cin>>c.arvt>>c.bank;
        c.id=0;
        //vector<Car> v(m)={c};
        f.arvt=c.arvt;
        f.bank="left";
        if(c.bank=="left")lq.push(c);
        else rq.push(c);
        for(int i=1; i<m; i++){
            cin>>c.arvt>>c.bank;
            c.id=i;
            if(c.bank=="left")lq.push(c);
            else rq.push(c);
        }
        while(!lq.empty() || !rq.empty()){
            /// ferri now left bank
            if(f.bank=="left"){
                if(!lq.empty() && lq.front().arvt<=f.arvt){
                    f.ext=f.arvt+ t;
                    lq.front().ext = f.ext;
                    v[lq.front().id]=lq.front();
                    lq.pop();
                    int j=1;
                    while(j<n){
                        if(!lq.empty() && lq.front().arvt<=f.arvt){
                            lq.front().ext = f.ext;
                            v[lq.front().id]=lq.front();
                            lq.pop();
                            j++;
                        }
                        else j=n;
                    }
                    f.arvt = f.ext;
                    f.bank = "right";
                }
                else if(!rq.empty() && rq.front().arvt <= f.arvt){
                    f.ext=f.arvt+ 2*t;
                    rq.front().ext = f.ext;
                    v[rq.front().id]=rq.front();
                    rq.pop();
                    int j=1;
                    while(j<n){
                        if(!rq.empty() && rq.front().arvt<=f.arvt+t){
                            rq.front().ext = f.ext;
                            v[rq.front().id]=rq.front();
                            rq.pop();
                            j++;
                        }
                        else j=n;
                    }
                    f.arvt = f.ext;
                }
                else if(!lq.empty() && !rq.empty() && lq.front().arvt<=rq.front().arvt){
                    f.arvt = lq.front().arvt;
                    f.ext=f.arvt + t;
                    lq.front().ext = f.ext;
                    v[lq.front().id]=lq.front();
                    lq.pop();
                    int j=1;
                    while(j<n){
                        if(!lq.empty() && lq.front().arvt<=f.arvt){
                            lq.front().ext = f.ext;
                            v[lq.front().id]=lq.front();
                            lq.pop();
                            j++;
                        }
                        else j=n;
                    }
                    f.arvt = f.ext;
                    f.bank = "right";
                }
                else if(!lq.empty() && !rq.empty() && lq.front().arvt>rq.front().arvt){
                    f.arvt = rq.front().arvt;
                    f.ext=f.arvt+ 2*t;
                    rq.front().ext = f.ext;
                    v[rq.front().id]=rq.front();
                    rq.pop();
                    int j=1;
                    while(j<n){
                        if(!rq.empty() && rq.front().arvt<=f.arvt+t){
                            rq.front().ext = f.ext;
                            v[rq.front().id]=rq.front();
                            rq.pop();
                            j++;
                        }
                        else j=n;
                    }
                    f.arvt = f.ext;
                }
                else if(!lq.empty() || !rq.empty()){
                    if(!lq.empty()){
                        f.arvt = lq.front().arvt;
                        f.ext=f.arvt + t;
                        lq.front().ext = f.ext;
                        v[lq.front().id]=lq.front();
                        lq.pop();
                        int j=1;
                        while(j<n){
                            if(!lq.empty() && lq.front().arvt<=f.arvt){
                                lq.front().ext = f.ext;
                                v[lq.front().id]=lq.front();
                                lq.pop();
                                j++;
                            }
                            else j=n;
                        }
                        f.arvt = f.ext;
                        f.bank = "right";
                    }
                    else{
                        f.arvt = rq.front().arvt;
                        f.ext=f.arvt+ 2*t;
                        rq.front().ext = f.ext;
                        v[rq.front().id]=rq.front();
                        rq.pop();
                        int j=1;
                        while(j<n){
                            if(!rq.empty() && rq.front().arvt<=f.arvt+t){
                                rq.front().ext = f.ext;
                                v[rq.front().id]=rq.front();
                                rq.pop();
                                j++;
                            }
                            else j=n;
                        }
                        f.arvt = f.ext;
                    }
                }
            }
            /// ferri now right bank
            else{
                if(!rq.empty() && rq.front().arvt<=f.arvt){
                    f.ext=f.arvt+ t;
                    rq.front().ext = f.ext;
                    v[rq.front().id]=rq.front();
                    rq.pop();
                    int j=1;
                    while(j<n){
                        if(!rq.empty() && rq.front().arvt<=f.arvt){
                            rq.front().ext = f.ext;
                            v[rq.front().id]=rq.front();
                            rq.pop();
                            j++;
                        }
                        else j=n;
                    }
                    f.arvt = f.ext;
                    f.bank = "left";
                }
                else if(!lq.empty() && lq.front().arvt <= f.arvt){
                    f.ext=f.arvt+ 2*t;
                    lq.front().ext = f.ext;
                    v[lq.front().id]=lq.front();
                    lq.pop();
                    int j=1;
                    while(j<n){
                        if(!lq.empty() && lq.front().arvt<=f.arvt+t){
                            lq.front().ext = f.ext;
                            v[lq.front().id]=lq.front();
                            lq.pop();
                            j++;
                        }
                        else j=n;
                    }
                    f.arvt = f.ext;
                }
                else if(!lq.empty() && !rq.empty() && lq.front().arvt<rq.front().arvt){
                    f.arvt = lq.front().arvt;
                    f.ext=f.arvt + 2*t;
                    lq.front().ext = f.ext;
                    v[lq.front().id]=lq.front();
                    lq.pop();
                    int j=1;
                    while(j<n){
                        if(!lq.empty() && lq.front().arvt<=f.arvt){
                            lq.front().ext = f.ext;
                            v[lq.front().id]=lq.front();
                            lq.pop();
                            j++;
                        }
                        else j=n;
                    }
                    f.arvt = f.ext;
                }
                else if(!lq.empty() && !rq.empty() && lq.front().arvt>=rq.front().arvt){
                    f.arvt = rq.front().arvt;
                    f.ext=f.arvt+ t;
                    rq.front().ext = f.ext;
                    v[rq.front().id]=rq.front();
                    rq.pop();
                    int j=1;
                    while(j<n){
                        if(!rq.empty() && rq.front().arvt<=f.arvt+t){
                            rq.front().ext = f.ext;
                            v[rq.front().id]=rq.front();
                            rq.pop();
                            j++;
                        }
                        else j=n;
                    }
                    f.arvt = f.ext;
                    f.bank = "left";
                }
                else if(!lq.empty() || !rq.empty()){
                    if(!lq.empty()){
                        f.arvt = lq.front().arvt;
                        f.ext=f.arvt + 2*t;
                        lq.front().ext = f.ext;
                        v[lq.front().id]=lq.front();
                        lq.pop();
                        int j=1;
                        while(j<n){
                            if(!lq.empty() && lq.front().arvt<=f.arvt){
                                lq.front().ext = f.ext;
                                v[lq.front().id]=lq.front();
                                lq.pop();
                                j++;
                            }
                            else j=n;
                        }
                        f.arvt = f.ext;
                    }
                    else{
                        f.arvt = rq.front().arvt;
                        f.ext=f.arvt+ t;
                        rq.front().ext = f.ext;
                        v[rq.front().id]=rq.front();
                        rq.pop();
                        int j=1;
                        while(j<n){
                            if(!rq.empty() && rq.front().arvt<=f.arvt+t){
                                rq.front().ext = f.ext;
                                v[rq.front().id]=rq.front();
                                rq.pop();
                                j++;
                            }
                            else j=n;
                        }
                        f.arvt = f.ext;
                        f.bank = "left";
                    }
                }
            }
        }
        int i=0;
        while(i < m){
            printf("%d\n",v[i].ext);
            i++;
        }
        if(T!=0){
            printf("\n");
        }
    }
    return 0;
}
