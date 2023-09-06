#include<stdio.h>
int main(){
    int x,n,sta,end;
    int i,j;
    scanf("%d%d",&x,&n);
    int X[30000]={0},min=0,ok=0;
    for(i=0;i<n;i++){
        scanf("%d%d",&sta,&end);
        if(end-sta>min)
            min=end-sta;
        for(j=sta+1;j<end;j++)
            X[j]=1;
    }
    for(i=min;i<x;i++){
        for(j=0;1;j+=i){
            if(j>=x){
                ok=1;break;
            }
            if(X[j]==1)
                break;
        }
        if(ok==1){
            min=i;break;
        }
    }
    printf("%d\n",min);
    return 0;
}

