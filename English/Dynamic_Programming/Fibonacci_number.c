#include<stdio.h>
int main(){
    int ncase,n;
    long long F[50];
    int i;
    F[1]=F[2]=1;
    for(i=3;i<=45;i++)
        F[i]=F[i-1]+F[i-2];
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d",&n);
        printf("%lld\n",F[n]);
    }
    return 0;
}
