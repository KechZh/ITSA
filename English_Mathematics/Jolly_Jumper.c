#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main(){
    int n;
    int i;
    while(scanf("%d",&n)!=EOF){
        int N[n],D[n-1];
        int jolly=1;
        for(i=0;i<n;i++)
            scanf("%d",&N[i]);
        for(i=0;i<n-1;i++)
            D[i]=abs(N[i+1]-N[i]);
        qsort(D,n-1,sizeof(int),cmp);
        for(i=0;i<n-1;i++)
            if(D[i]!=i+1){
                jolly=0;
                break;
            }
        if(jolly)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
