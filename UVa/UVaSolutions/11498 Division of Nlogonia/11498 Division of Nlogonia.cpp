#include<stdio.h>
int main(){
    int T,n,x,y,px,py;
    while(scanf("%d",&T)==1 && T!=0){
        scanf("%d%d",&px,&py);
        while(T--){
            scanf("%d%d",&x,&y);
            if(px==x || py==y) printf("divisa\n");
            else if(x>px && y>py) printf("NE\n");
            else if(x<px && y>py) printf("NO\n");
            else if(x<px && y<py) printf("SO\n");
            else printf("SE\n");
        }
    }
    return 0;
}
