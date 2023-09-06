#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main(){
    int np;
    int s;
    int i,j;
    while(1){
        scanf("%d",&np);
        if(np==0)
        break;
        int E[np],S[np];
        for(i=0;i<np;i++)
            scanf("%d",&E[i]);
        for(i=0;i<np;i++)
            scanf("%d",&S[i]);
        qsort(E,np,sizeof(int),cmp);
        qsort(S,np,sizeof(int),cmp);
        for(i=j=np-1,s=0;j>=0;j--)
            if(S[i]>E[j]){
                s++;
                i--;
            }
        printf("%d\n",s);
     }
     return 0;
}
