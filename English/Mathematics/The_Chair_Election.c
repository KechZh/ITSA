#include<stdio.h>
#include<string.h>
int main(){
    int ncase,n;
    int i;
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d",&n);
        int vote,max=0;
        int C[n+1];
        memset(C,0,sizeof(C));
        for(i=1;i<=n;i++){
            scanf("%d",&vote);
            C[vote]++;
        }
        for(i=1;i<=n;i++)
            if(C[i]>C[max]&&C[i]>=n/2+1)
                max=i;
        printf("%d\n",max);
    }
    return 0;
}
