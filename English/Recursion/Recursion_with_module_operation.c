#include<stdio.h>
int main(){
    int n,m;
    int f1=0,f2=1,f3=1;
    int i;
    scanf("%d%d",&n,&m);
    for(i=2;i<=n;i++){
        f3=(f1+f2)%m;
        f1=f2;
        f2=f3;
    }
    printf("%d\n",f3);
    return 0;
}
