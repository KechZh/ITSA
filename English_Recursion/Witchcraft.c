#include<stdio.h>
int main(){
    int ncase;
    int mp,N[3],P[3];
    int i,j,k;
    scanf("%d",&ncase);
    while(ncase--){
        int ok=0;
        scanf("%d",&mp);
        for(i=0;i<3;i++)
            scanf("%d",&N[i]);
        for(i=0;i<3;i++)
            scanf("%d",&P[i]);
        for(i=0;i<=N[0];i++)
            for(j=0;j<=N[1];j++)
                for(k=0;k<=N[2];k++){
                    if(mp==P[0]*i+P[1]*j+P[2]*k){
                        ok=1;
                        break;
                    }
                    else if(mp<P[0]*i+P[1]*j+P[2]*k)
                        break;
                }
        if(ok)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
