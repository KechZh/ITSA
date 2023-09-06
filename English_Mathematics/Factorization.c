#include<stdio.h>
int main(){
    int ncase;
    scanf("%d",&ncase);
    while(ncase--){
        int in,d;
        int N[100000],P[100000]={0};
        int n=0;
        int i;
        scanf("%d",&in);
        if(in==1){
            printf("1\n");
            continue;
        }
        for(d=2;d<=in;d++)
            if(in%d==0){
                N[n]=d;
                while(in%d==0){
                    P[n]++;
                    in/=d;
                }
                n++;
            }
        for(i=0;i<n;i++){
            printf("%d",N[i]);
            if(P[i]>1)
                printf("^%d",P[i]);
            if(i<n-1)
                printf("*");
            else
                printf("\n");
        }
    }
    return 0;
}
