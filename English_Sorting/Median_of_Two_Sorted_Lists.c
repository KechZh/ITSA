#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main(){
    int ncase,n;
    int i;
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d",&n);
        int N[n*2];
        for(i=0;i<n*2;i++)
            scanf("%d",&N[i]);
        qsort(N,n*2,sizeof(int),cmp);
        printf("%d\n",N[n-1]);
    }
    return 0;
}
