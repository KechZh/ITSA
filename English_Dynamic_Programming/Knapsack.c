#include<stdio.h>
int n,ow,max;
int W[30],V[30];
void choose(int i,int wei,int val){
    if(wei>ow||i==n)
        return;
    if(val>max)
        max=val;
    choose(i+1,wei+W[i+1],val+V[i+1]);
    choose(i+1,wei,val);
}
int main(){
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d%d",&W[i],&V[i]);
    scanf("%d",&ow);
    choose(-1,0,0);
    printf("%d\n",max);
    return 0;
}
