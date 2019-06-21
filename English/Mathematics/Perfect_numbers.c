#include<stdio.h>
#include<math.h>
int main(){
    int ncase;
    long long p;
    int i;
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%lld",&p);
        long long n=1;
        for(i=2;i<=sqrt(p);i++)
            if(p%i==0)
                n+=i+p/i;
        if(p==n)
            printf("perfect\n");
        else
            printf("nonperfect\n");
    }
    return 0;
}
