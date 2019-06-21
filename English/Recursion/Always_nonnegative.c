#include<stdio.h>
int S[20]={0};
void partial(int sum,int pos,int neg,int n){
    if(sum<0)
        return;
    if(pos+neg==n){
        S[sum]++;
        return;
    }
    if(pos>0)
        partial(sum+1,pos-1,neg,n);
    if(neg>0)
        partial(sum-1,pos,neg-1,n);
}
int main(){
    int n;
    int ans=0;
    int i;
    scanf("%d",&n);
    partial(0,n,n,n);
    for(i=0;i<=n;i++)
        ans+=S[i]*S[i];
    printf("%d\n",ans);
    return 0;
}
