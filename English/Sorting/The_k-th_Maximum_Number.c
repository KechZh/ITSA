#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main(){
    int ncase,n,k;
    int i;
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d%d",&n,&k);
        int N[n];
        for(i=0;i<n;i++)
            scanf("%d",&N[i]);
        qsort(N,n,sizeof(int),cmp);
        printf("%d\n",N[n-k]);
    }
    return 0;
}
