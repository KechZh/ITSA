#include<stdio.h>
#include<string.h>
int main(){
    int ncase;
    scanf("%d",&ncase);
    while(ncase--){
        int p,q;
        scanf("%d%d",&p,&q);
        int A[p][q],B[q][p],C[p][p];
        int i,j,k;
        memset(C,0,sizeof(C));
        for(i=0;i<p;i++)
            for(j=0;j<q;j++)
                scanf("%d",&A[i][j]);
        for(i=0;i<q;i++)
            for(j=0;j<p;j++)
                scanf("%d",&B[i][j]);
        for(i=0;i<p;i++)
            for(j=0;j<p;j++)
                for(k=0;k<q;k++){
                    C[i][j]+=A[i][k]*B[k][j];
                }
        for(i=0;i<p;i++)
            for(j=0;j<p;j++){
                if(j<p-1)
                    printf("%d ",C[i][j]);
                else
                    printf("%d\n",C[i][j]);
            }
        if(ncase)
            printf("\n");
    }
    return 0;
}
