#include<stdio.h>
int main(){
    long long x,y;
    long long f=0,f1=1,f2=1;
    int ans=0;
    scanf("%lld%lld",&x,&y);
    if(1>=x&&1<=y)
        ans+=2;
    while(f<y){
        f=f1+f2;
        f1=f2;
        f2=f;
        if(f>=x&&f<=y)
            ans++;
    }
    printf("%d\n",ans);
    return 0;
}
