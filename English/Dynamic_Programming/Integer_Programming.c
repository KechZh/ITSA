#include<stdio.h>
#include<string.h>
int n;
int C[110];
int M[500010];
void calculate(int i,int m){
    if(i==n){
        M[m]=1;
        return;
    }
    calculate(i+1,m+C[i+1]);
    calculate(i+1,m);
}
int main(){
    int i;
    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        int ans=0;
        memset(M,0,sizeof(M));
        for(i=0;i<n;i++)
            scanf("%d",&C[i]);
        calculate(-1,0);
        for(i=0;i<500010;i++)
            if(M[i]==1)
                ans++;
        printf("%d\n",ans);
    }
    return 0;
}
