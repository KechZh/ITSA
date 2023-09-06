#include<stdio.h>
int max[1000];
void build_table(){
    int i;
    max[1]=1;
    for(i=2;i<1000;i++)
        max[i]=max[i-1]+(i+1)/2;
}
int find(int n){
    int i;
    for(i=1;i<1000;i++)
        if(n<=max[i])
            return i;
}
int main(){
    int ncase=5,n;
    build_table();
    while(ncase--){
        scanf("%d",&n);
        if(n==0)
            break;
        int ans=find(n);
        printf("%d\n",ans);
    }
    return 0;
}
