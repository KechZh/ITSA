#include<stdio.h>
int max(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}
int main(){
    int n;
    int i;
    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        int A[n];
        int C0[n],C1[n];
        for(i=0;i<n;i++)
            scanf("%d",&A[i]);
        C0[0]=0;C1[0]=A[0];
        for(i=1;i<n;i++){
            C0[i]=max(C0[i-1],C1[i-1]);
            C1[i]=C0[i-1]+A[i];
        }
        printf("%d\n",max(C0[n-1],C1[n-1]));
    }
    return 0;
}
