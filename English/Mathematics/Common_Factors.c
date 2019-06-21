#include<stdio.h>
int gcd(int a,int b){
    int d=a<b?a:b;
    while(a%b!=0){
        d=a%b;
        a=b;
        b=d;
    }
    return d;
}
void print_factor(int d){
    int F[1000];
    int f=0;
    int i;
    for(i=2;i<=d;i++)
        if(d%i==0)
            F[f++]=i;
    printf("Common factor in ascending order: \n");
    for(i=0;i<f;i++){
        if(i<f-1)
            printf("%d ",F[i]);
        else
            printf("%d\n",F[i]);
    }
}
int main(){
    int N[1000];
    int n=0;
    int i;
    while(scanf("%d",&N[n])!=EOF)
        n++;
    int d=N[0];
    for(i=1;i<n;i++)
        d=gcd(d,N[i]);
    print_factor(d);
    return 0;
}
