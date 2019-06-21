#include<stdio.h>
int main(){
    int n;
    int fac=1;
    int sum=0;
    int i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fac=(fac*i)%100000;
        sum=(sum+fac)%100000;
    }
    printf("%d\n",sum);
    return 0;
}
