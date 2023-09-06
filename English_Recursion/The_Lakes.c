#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int L[410][410];
int T[410][410];
int A[100000]={0};
int size=0;
int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
void travel(int x,int y){
    if(L[x][y]==0||T[x][y]==1)
        return;
    A[size]++;
    T[x][y]=1;
    travel(x+1,y);
    travel(x-1,y);
    travel(x,y+1);
    travel(x,y-1);
}
int main(){
    int m,n;
    int i,j;
    scanf("%d%d",&m,&n);
    memset(L,0,sizeof(L));
    memset(T,0,sizeof(T));
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&L[i][j]);
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            if(L[i][j]==1&&T[i][j]==0){
                travel(i,j);
                size++;
            }
    qsort(A,size,sizeof(int),cmp);
    for(i=size-1;i>=0;i--)
        printf("%d\n",A[i]);
    return 0;
}
