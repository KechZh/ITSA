#include<stdio.h>
#include<string.h>
int main(){
    int n,m;
    int i,j;
    scanf("%d%d",&n,&m);
    int J[n],M[m];
    int min=0,max=0;
    memset(M,0,sizeof(M));
    for(i=0;i<n;i++)
        scanf("%d",&J[i]);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            if(M[j]<M[min])
                min=j;
        M[min]+=J[i];
        if(M[min]>max)
            max=M[min];
    }
    printf("%d\n",max);
    return 0;
}

