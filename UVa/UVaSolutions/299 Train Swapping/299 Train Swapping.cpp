#include<bits/stdc++.h>

using namespace std;
int main(){
    int N,L;
    scanf("%d",&N);
    while(N--){
        scanf("%d",&L);
        int a[L+5];
        int s=0;
        for(int i=1; i<=L; i++){
            scanf("%d",&a[i]);
        }
        for(int i=1; i<L; i++){
            if(a[i]!=i){
                int j=i+1;
                while(i!=a[j]){
                    j++;
                }
                s=s+j-i;
                for(j=j; j>i; j--){
                    swap(a[j],a[j-1]);
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",s);
    }
    return 0;
}
