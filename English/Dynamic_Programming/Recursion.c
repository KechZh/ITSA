#include<stdio.h>
int main(){
    int k;
    int F[100];
    int i;
    F[0]=1;F[1]=F[2]=2;
    scanf("%d",&k);
    for(i=3;i<=k;i++)
        F[i]=F[i-1]/4+F[i-2]/2+F[i-3];
    printf("%d\n",F[k]);
    return 0;
}
