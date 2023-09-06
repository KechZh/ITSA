#include<stdio.h>
#include<string.h>
int P1[30],P2[30],A[30];
void multiple(int now){
    int i,j;
    memset(A,0,sizeof(A));
    for(i=0;i<=now*2;i++)
        for(j=0;j<=2;j++)
            A[i+j]+=P1[i]*P2[j];
}
void transfer(int now){
    int i;
    for(i=0;i<=now*2;i++)
        P1[i]=A[i];
}
int main(){
    int a,b,c,d;
    int i;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    P1[2]=P2[2]=A[2]=a;
    P1[1]=P2[1]=A[1]=b;
    P1[0]=P2[0]=A[0]=c;
    for(i=1;i<d;i++){
        multiple(i);
        transfer(i+1);
    }
    for(i=d*2;i>=0;i--){
        if(i!=0)
            printf("%d ",A[i]);
        else
            printf("%d\n",A[i]);
    }
    return 0;
}
