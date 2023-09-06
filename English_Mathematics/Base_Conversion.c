#include<stdio.h>
int main(){
    int ncase;
    scanf("%d",&ncase);
    while(ncase--){
        int n,b;
        int a=1;
        char C[1000]={'\0'};
        int c=0;
        scanf("%d%d",&n,&b);
        while(a*b<=n)
            a*=b;
        while(a){
            int temp=n/a;
            if(temp<10)
                C[c++]=temp+'0';
            else
                C[c++]=temp-10+'A';
            if(n>=a)
                n%=a;
            a/=b;
        }
        printf("%s\n",C);
    }
    return 0;
}
