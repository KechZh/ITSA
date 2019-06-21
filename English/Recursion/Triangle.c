#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main(){
    int n;
    int i,j,k;
    scanf("%d",&n);
    int L[n];
    for(i=0;i<n;i++)
        scanf("%d",&L[i]);
    qsort(L,n,sizeof(int),cmp);
    for(i=0;i<n-2;i++)
        for(j=i+1;j<n-1;j++)
            for(k=j+1;k<n;k++)
                if(L[i]+L[j]>L[k])
                    printf("%d %d %d\n",L[i],L[j],L[k]);
    return 0;
}
