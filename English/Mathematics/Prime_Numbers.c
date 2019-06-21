#include<stdio.h>
int main(){
    int ncase=6;
    int N[30010]={0};
    int i,j;
    for(i=2;i<=30000;i++)
        if(N[i]==0){
            for(j=2;i*j<=30000;j++)
                N[i*j]=1;
        }
    while(ncase--){
        int in;
        int n=0;
        scanf("%d",&in);
        if(in==0)
            break;
        for(i=2;i<in;i++)
            if(N[i]==0)
                n++;
        printf("%d\n",n);
    }
    return 0;
}
