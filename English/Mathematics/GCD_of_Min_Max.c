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
int main(){
    int ncase,n;
    int in;
    scanf("%d",&ncase);
    while(ncase--){
        int max=0,min=0x7FFFFFFF;
        scanf("%d",&n);
        while(n--){
            scanf("%d",&in);
            max=in>max?in:max;
            min=in<min?in:min;
        }
        int d=gcd(max,min);
        printf("%d\n",d);
    }
    return 0;
}
